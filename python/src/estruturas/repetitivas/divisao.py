""" Problema "divisão"
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo segundo.
Caso não for possível, mostre a mensagem “DIVISÃO IMPOSSÍVEL”
"""

MIN_NUMBER = 1
MAX_NUMBER = 10


def divisao() -> None:
    n = int(input(f"Quantos casos você vai digitar (mínimo de {MIN_NUMBER} e máximo de {MAX_NUMBER})? "))

    if not MIN_NUMBER < n < MAX_NUMBER:
        n = MIN_NUMBER

    for i in range(1, n+1):
        print(f"Caso {i} de {n}")

        numerator = int(input("Entre com o numerador: "))
        denominator = int(input("Entre com denominador: "))

        if denominator != 0:
            division = numerator / denominator
            print(f"DIVISÃO = {division:.2f}")
        else:
            print("DIVISÃO IMPOSSÍVEL")


if __name__ == "__main__":
    divisao()
