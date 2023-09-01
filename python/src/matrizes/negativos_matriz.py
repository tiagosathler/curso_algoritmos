""" Problema "negativos_matriz"
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros. Em
seguida, mostrar na tela somente os números negativos da matriz.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def read_size_of(dimension: str) -> int:
    size = int(input(f"Qual a quantidade de {dimension} da matriz (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < size <= MAX_SIZE:
        size = MIN_SIZE

    return size


def read_matrix(rows: int, columns: int) -> list[list[int]]:
    matrix: list[list[int]] = [[0 for _ in range(columns)] for _ in range(rows)]

    for i in range(len(matrix)):
        print(f"Digite os {len(matrix[0])} elementos da {i + 1}ª linha:")
        for j in range(len(matrix[0])):
            matrix[i][j] = int(input(f"Elemento [{i}, {j}]: "))

    return matrix


def print_negative_elements(matrix: list[list[int]]) -> None:
    print("VALORES NEGATIVOS")
    for i in range(len(matrix)):
        for value in matrix[i]:
            if value < 0:
                print(f"{value}")


def negativos_matriz() -> None:
    rows = read_size_of("linhas")
    columns = read_size_of("colunas")

    matrix: list[list[int]] = read_matrix(rows, columns)

    print_negative_elements(matrix)


if __name__ == "__main__":
    negativos_matriz()
