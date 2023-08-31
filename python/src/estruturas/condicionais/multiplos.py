""" Problema "multiplos"
 Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro.
 Os números podem ser digitados em qualquer ordem.
"""


def multiplos() -> None:
    print("Digite dois números inteiros:")

    a = int(input())
    b = int(input())

    if a != 0 and b != 0 and (a % b == 0 or b % a == 0):
        print("São múltiplos")
    else:
        print("Não são múltiplos")


if __name__ == "__main__":
    multiplos()
