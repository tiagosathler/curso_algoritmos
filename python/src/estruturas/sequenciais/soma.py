""" Problema "soma"
 * Fazer um programa para ler dois valores inteiros X e Y,
 * e depois mostrar na tela o valor da soma destes números.
"""


def soma() -> None:
    x = int(input("Digite o valor de X: "))
    y = int(input("Digite o valor de Y: "))

    summation = x + y

    print(f"SOMA = {summation}")


if __name__ == "__main__":
    soma()
