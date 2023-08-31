""" Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def negativos() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector: [int] = n * [0]

    for i in range(0, n):
        vector[i] = int(input(f"Digite um número ({i + 1} de {n}): "))

    print("NÚMEROS NEGATIVOS:")

    for value in vector:
        if value < 0:
            print(f"{value}")


if __name__ == "__main__":
    negativos()
