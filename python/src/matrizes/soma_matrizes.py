""" Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B,
contendo de M linhas e N colunas cada (M e N máximo = 10).
Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais.
Imprimir na tela a matriz gerada.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def read_size_of(dimension: str) -> int:
    size = int(input(f"Qual a quantidade de {dimension} da matriz (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < size <= MAX_SIZE:
        size = MIN_SIZE

    return size


def read_matrix_of(rows: int, columns: int, dimension: str) -> list[list[int]]:
    matrix: list[list[int]] = [[0 for _ in range(columns)] for _ in range(rows)]

    print(f"Digite os valores da matriz {dimension}:")
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            matrix[i][j] = int(input(f"Elemento [{i}, {j}]: "))

    return matrix


def sum_matrix(matrix_a: list[list[int]], matrix_b: list[list[int]]) -> list[list[int]]:
    rows = min(len(matrix_a), len(matrix_b))
    columns = min(len(matrix_a[0]), len(matrix_b[0]))

    matrix_c: list[list[int]] = [[0 for _ in range(columns)] for _ in range(rows)]

    for i in range(rows):
        for j in range(columns):
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j]

    return matrix_c


def print_matrix_sum(matrix: list[list[int]]) -> None:
    print("MATRIZ SOMA:")

    for i in range(len(matrix)):
        for value in matrix[i]:
            print(f"\t{value:2d}", end="")
        print()


def soma_matrizes() -> None:
    rows = read_size_of("linhas")
    columns = read_size_of("colunas")

    matrix_a = read_matrix_of(rows, columns, "A")
    matrix_b = read_matrix_of(rows, columns, "B")

    matrix_c = sum_matrix(matrix_a, matrix_b)

    print_matrix_sum(matrix_c)


if __name__ == "__main__":
    soma_matrizes()
