""" Problema "sequencia_impares"
Leia um valor inteiro X.
Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
"""


def sequencia_impares() -> None:
    x = int(input("Digite o valor de X (maior que 1): "))
    if x <= 1:
        x = 2

    for i in range(1, x + 1):
        if i % 2 == 1:
            print(f"{i}")


if __name__ == "__main__":
    sequencia_impares()
