""" Problema "circulo"
Fazer um programa para ler o valor "r" do raio de um círculo,
e depois mostrar o valor da área do círculo com três casas decimais.
A fórmula da área do círculo é a seguinte: area = 𝜋. 𝑟. Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação,
ou então, se preferir, use diretamente o valor 3,14159.
"""

import math


def circulo() -> None:
    radius = float(input("Digite o valor do raio do circulo: "))

    area = math.pi * radius ** 2

    print(f"AREA = {area:.3f}")


if __name__ == "__main__":
    circulo()
