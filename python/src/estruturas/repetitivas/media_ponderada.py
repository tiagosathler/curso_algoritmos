""" Problema "media_ponderada"
Leia um valor inteiro N, que representa o número de casos de teste que segue.
Cada caso de teste consiste em 3 valores reais, para os quais você deverá calcular
e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3
e o terceiro valor tem peso 5.
Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso,
dividida pela soma dos pesos.
"""

MIN_NUMBER = 1
MAX_NUMBER = 15

WEIGHT_A = 2.0
WEIGHT_B = 3.0
WEIGHT_C = 5.0


def media_ponderada() -> None:
    n = int(input(f"Quantos casos você vai digitar (mínimo de {MIN_NUMBER} e máximo de {MAX_NUMBER})? "))

    if not MIN_NUMBER < n < MAX_NUMBER:
        n = MIN_NUMBER

    for i in range(1, n + 1):
        print(f"Caso {i} de {n}")
        print("Digite os três números:")

        a = float(input())
        b = float(input())
        c = float(input())

        average = (a * WEIGHT_A + b * WEIGHT_B + c * WEIGHT_C) / (WEIGHT_A + WEIGHT_B + WEIGHT_C)

        print(f"MÉDIA PONDERADA = {average:.1f}")


if __name__ == "__main__":
    media_ponderada()
