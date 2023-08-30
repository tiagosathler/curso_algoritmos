""" Problema "medidas"
Fazer um programa para ler três medidas A, B e C.
Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
 a) a área do quadrado com lado A
 b) a área do triângulo retângulo que base A e altura B
 c) a área do trapézio com bases A e B, e altura C
"""


def medidas() -> None:
    a = float(input("Digite a medida A: "))

    b = float(input("Digite a medida B: "))

    c = float(input("Digite a medida C: "))

    square_area = a ** 2
    triangle_area = a * b / 2
    trapeze_area = ((a + b) * c) / 2

    print(f"ÁREA DO QUADRADO = {square_area:.4f}")
    print(f"ÁREA DO TRIÂNGULO = {triangle_area:.4f}")
    print(f"ÁREA DO TRAPÉZIO = {trapeze_area:.4f}")


if __name__ == "__main__":
    medidas()
