""" Problema "retângulo"
 * Fazer um programa para ler as medidas da base e altura de um retângulo.
 * Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo,
 * com quatro casas decimais,
"""

import math


def retangulo() -> None:
    base_length: float = float(input("Base do triângulo: "))
    height: float = float(input("Altura do triângulo: "))

    area = height * base_length
    perimeter = 2 * (base_length + height)
    diagonal = math.sqrt(base_length ** 2 + height * height)

    print(f"ÁREA = {area:.4f}")
    print(f"PERÍMETRO = {perimeter:.4f}")
    print(f"DIAGONAL = {diagonal:.4f}")


if __name__ == "__main__":
    retangulo()
