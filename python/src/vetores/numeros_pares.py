""" Problema "números_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor.
Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def numeros_pares() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector: [int] = n * [0]

    for i in range(len(vector)):
        vector[i] = int(input(f"Digite um número ({i + 1} de {n}): "))

    print("\nNÚMEROS PARES:")

    quantity = 0

    for value in vector:
        if value % 2 == 0 and value != 0:
            print(f"{value} ", end="")
            quantity += 1

    print(f"\n\nQUANTIDADE DE PARES = {quantity}")


if __name__ == "__main__":
    numeros_pares()
