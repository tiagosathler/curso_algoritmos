""" Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B.
Imprima o vetor C gerado.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def read_vector(size: int, vector_name: str) -> [int]:
    print(f"Digite os {size} valores do vetor {vector_name}:")

    vector: [int] = size * [0]

    for i in range(len(vector)):
        vector[i] = int(input())

    return vector


def sum_vectors(vector_a: [int], vector_b: [int]) -> [int]:
    size = min(len(vector_a), len(vector_b))

    sum_vector: [int] = size * [0]

    for i in range(size):
        sum_vector[i] += vector_a[i] + vector_b[i]

    return sum_vector


def print_result(vector: [int]) -> None:
    print("VETOR RESULTANTE:")
    for value in vector:
        print(f"{value}")


def soma_vetores() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector_a: [int] = read_vector(n, "A")
    vector_b: [int] = read_vector(n, "B")

    vector_c: [int] = sum_vectors(vector_a, vector_b)

    print_result(vector_c)


if __name__ == "__main__":
    soma_vetores()
