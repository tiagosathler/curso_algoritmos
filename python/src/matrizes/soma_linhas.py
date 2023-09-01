""" Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def read_size_of(dimension: str) -> int:
    size = int(input(f"Qual a quantidade de {dimension} da matriz (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < size <= MAX_SIZE:
        size = MIN_SIZE

    return size


def read_matrix(rows: int, columns: int) -> list[list[float]]:
    matrix: list[list[float]] = [[0.0 for _ in range(columns)] for _ in range(rows)]

    for i in range(len(matrix)):
        print(f"Digite os {len(matrix[0])} elementos da {i + 1}ª linha:")
        for j in range(len(matrix[0])):
            matrix[i][j] = float(input(f"Elemento [{i}, {j}]: "))

    return matrix


def summation_of_rows(matrix: list[list[float]]) -> list[float]:
    sum_of_rows: list[float] = len(matrix) * [0.0]

    for i in range(len(matrix)):
        for value in matrix[i]:
            sum_of_rows[i] += value

    return sum_of_rows


def print_sum_of_rows(sum_of_rows: list[float]) -> None:
    print("VETOR GERADO:")
    for value in sum_of_rows:
        print(f"{value:.1f}")


def soma_linhas() -> None:
    rows = read_size_of("linhas")
    columns = read_size_of("colunas")

    matrix: list[list[float]] = read_matrix(rows, columns)

    sum_of_rows: list[float] = summation_of_rows(matrix)

    print_sum_of_rows(sum_of_rows)


if __name__ == "__main__":
    soma_linhas()
