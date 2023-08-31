""" Problema "tabuada"
 * Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
"""


def tabuada() -> None:
    n = int(input("Deseja a tabuada para qual valor? "))

    for i in range(11):
        print(f"{i:2} x {n} = {i * n}")


if __name__ == "__main__":
    tabuada()

