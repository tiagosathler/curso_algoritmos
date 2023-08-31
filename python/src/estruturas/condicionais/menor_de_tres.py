""" Problema "menor_de_tres"
Fazer um programa para ler três números inteiros.
Em seguida, mostrar qual o menor dentre os três números lidos.
Em caso de empate, mostrar apenas uma vez.
"""


def menor_de_tres() -> None:
    a = int(input("Primeiro valor (a): "))

    b = int(input("Segundo valor (b): "))

    c = int(input("Terceiro valor (c): "))

    smallest = c
    if a <= b and a <= c:
        smallest = a

    elif b <= c:
        smallest = b

    print(f"MENOR = {smallest}")


if __name__ == "__main__":
    menor_de_tres()
