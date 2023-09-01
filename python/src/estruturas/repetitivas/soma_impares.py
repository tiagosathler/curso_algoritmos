""" Problema "soma_impares"
 * Leia 2 valores inteiros X e Y (em qualquer ordem).
 * A seguir, calcule e mostre a soma dos números impares entre eles.
"""


def soma_impares() -> None:
    print("Digite dois números inteiros ('x' e 'y'): ")

    x = int(input())
    y = int(input())

    if x > y:
        x, y = y, x

    summation = 0

    for i in range(x + 1, y):
        if i % 2 == 1:
            summation += i

    print(f"SOMA DOS ÍMPARES = {summation}")


if __name__ == "__main__":
    soma_impares()

