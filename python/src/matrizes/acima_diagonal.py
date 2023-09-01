""" Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def read_size() -> int:
    n = int(input(f"Qual a ordem da matriz (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    return n


def read_matrix(size: int) -> list[list[int]]:
    matrix: list[list[int]] = [[0 for _ in range(size)] for _ in range(size)]

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            matrix[i][j] = int(input(f"Elemento [{i}, {j}]: "))

    return matrix


def calculate_sum_of_elements_above_diagonal(matrix: list[list[int]]) -> int:
    summation = 0

    for i in range(len(matrix)):
        for j in range(i+1, len(matrix[i])):
            summation += matrix[i][j]

    return summation


def print_summation(summation: int) -> None:
    print(f"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {summation}")


def acima_diagonal() -> None:
    size: int = read_size()
    matrix: list[list[int]] = read_matrix(size)
    summation: int = calculate_sum_of_elements_above_diagonal(matrix)
    print_summation(summation)


if __name__ == "__main__":
    acima_diagonal()
