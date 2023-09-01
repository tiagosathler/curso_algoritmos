""" Problema "fatorial"
Fazer um programa para ler um número natural N (valor máximo: 15),
e depois calcular e mostrar o fatorial de N.
"""

MIN_NUMBER = 0
MAX_NUMBER = 15


def fatorial() -> None:
    n = int(input(f"Digite o valor de N (mínimo de {MIN_NUMBER} e máximo de {MAX_NUMBER}): "))

    if not MIN_NUMBER < n < MAX_NUMBER:
        n = MIN_NUMBER

    factorial = 1

    for i in range(1, n + 1):
        factorial *= i

    print(f"FATORIAL DE n = {factorial}")


if __name__ == "__main__":
    fatorial()
