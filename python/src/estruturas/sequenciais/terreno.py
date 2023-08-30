""" Problema 'terreno'
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo.
"""


def terreno() -> None:
    width: float
    length: float
    value_per_square_meter: float

    width = float(input("Digite a largura do terreno: "))
    length = float(input("Digite o comprimento do terreno: "))
    value_per_square_meter = float(input("Digite o valor do metro quadrado: "))

    area: float = width * length
    price: float = area * value_per_square_meter

    print(f"Área do terreno = {area:.2f}")
    print(f"Preço do terreno = R$ {price:.2f}")
