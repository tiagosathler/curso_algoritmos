""" Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
"""

MIN_SIZE = 2
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


def get_diagonal(matrix: list[list[int]]) -> list[int]:
    diagonal: [int] = len(matrix) * [0]
    for i in range(len(diagonal)):
        diagonal[i] = matrix[i][i]

    return diagonal


def get_negatives(matrix: [[int]]) -> int:
    count = 0
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] < 0:
                count += 1

    return count


def print_diagonal(diagonal: list[int]) -> None:
    print("DIAGONAL PRINCIPAL:")
    for value in diagonal:
        print(f"{value} ", end="")
    print("")


def print_negatives(negatives_count: int) -> None:
    print(f"QUANTIDADE DE NEGATIVOS = {negatives_count}")


def diagonal_negativos() -> None:
    n = read_size()

    matrix = read_matrix(n)
    diagonal = get_diagonal(matrix)
    negatives_count = get_negatives(matrix)
    print_diagonal(diagonal)
    print_negatives(negatives_count)


if __name__ == "__main__":
    diagonal_negativos()
