""" Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
Em seguida, fazer as seguintes ações:
 a) calcular e imprimir a soma de todos os elementos positivos da matriz;
 b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha;
 c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna;
 d) imprimir os elementos da diagonal principal da matriz;
 e) alterar a matriz elevando ao quadrado todos os números negativos da mesma.
Em seguida imprimir a matriz alterada.
"""

MIN_SIZE = 2
MAX_SIZE = 10
ROW = "linha"
COLUMN = "coluna"


def read_size() -> int:
    size = int(input(f"Qual a ordem da matriz (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < size <= MAX_SIZE:
        size = MIN_SIZE

    return size


def read_matrix(size: int) -> list[list[float]]:
    matrix: list[list[float]] = [[0.0 for _ in range(size)] for _ in range(size)]

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            matrix[i][j] = float(input(f"Elemento [{i}, {j}]: "))

    return matrix


def calculate_and_print_sum_of_positive_elements_of(matrix: list[list[float]]) -> None:
    summation = 0.0

    for i in range(len(matrix)):
        for value in matrix[i]:
            if value > 0:
                summation += value

    print(f"\nSOMA DOS POSITIVOS: {summation:.1f}")


def get_index_of_dimension(dimension: str, size: int) -> int:
    index = 0
    index_is_valid = False

    while not index_is_valid:
        if dimension == ROW:
            print(f"Escolha uma {ROW}: ", end="")

        elif dimension == COLUMN:
            print(f"Escolha uma {COLUMN}: ", end="")

        else:
            raise RuntimeError("Dimension string is invalid")

        index = int(input())

        index_is_valid = 0 <= index < size

        if not index_is_valid:
            print(f"VALOR FORA DA FAIXA (de {0} a {size - 1})! ESCOLHA NOVAMENTE!")

    return index


def print_elements_of_dimension(dimension: str, index: int, matrix: list[list[float]]) -> None:
    if dimension == ROW:
        if index < len(matrix):
            print(f"LINHA ESCOLHIDA ({index}): ")
            for value in matrix[index]:
                print(f"{value:.1f} ", end="")

    elif dimension == COLUMN:
        if index < len(matrix[0]):
            print(f"COLUNA ESCOLHIDA ({index}): ")
            for vector in matrix:
                print(f"{vector[index]:.1f} ", end="")
    print()


def print_diagonal(matrix: list[list[float]]) -> None:
    print()
    print("DIAGONAL PRINCIPAL: ")
    for i in range(len(matrix)):
        print(f"{matrix[i][i]:.1f} ", end="")
    print()


def square_the_negative_elements_of(matrix: list[list[float]]) -> None:
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            if matrix[i][j] < 0:
                matrix[i][j] *= matrix[i][j]


def print_matrix(matrix: list[list[float]]) -> None:
    print("\nMATRIZ ALTERADA:")
    for i in range(len(matrix)):
        for value in matrix[i]:
            print(f"{value:.1f} ", end="")
        print()
    print()


def matriz_geral() -> None:
    size: int = read_size()

    matrix: list[list[float]] = read_matrix(size)

    calculate_and_print_sum_of_positive_elements_of(matrix)

    row = get_index_of_dimension(ROW, len(matrix[0]))
    print_elements_of_dimension(ROW, row, matrix)

    column = get_index_of_dimension(COLUMN, len(matrix))
    print_elements_of_dimension(COLUMN, column, matrix)

    print_diagonal(matrix)

    square_the_negative_elements_of(matrix)

    print_matrix(matrix)


if __name__ == "__main__":
    matriz_geral()
