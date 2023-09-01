""" Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10).
Mostrar qual o maior elemento de cada linha. Suponha não haver empates.
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


def get_highest_number_per_row(matrix: list[list[int]]) -> list[int]:
    highest_number_per_row: list[int] = len(matrix) * [0]

    for i in range(len(matrix)):
        highest_number_per_row[i] = matrix[i][0]
        for value in matrix[i]:
            if value > highest_number_per_row[i]:
                highest_number_per_row[i] = value

    return highest_number_per_row


def print_highest_numbers(highest_number_per_row: list[int]) -> None:
    print("MAIOR ELEMENTO DE CADA LINHA:")
    for highest_number in highest_number_per_row:
        print(f"{highest_number}")


def cada_linha() -> None:
    size = read_size()
    matrix: list[list[int]] = read_matrix(size)
    highest_number_per_row: list[int] = get_highest_number_per_row(matrix)
    print_highest_numbers(highest_number_per_row)


if __name__ == "__main__":
    cada_linha()
