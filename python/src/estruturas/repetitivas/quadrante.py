""" Problema "quadrante"
Escreva um programa para ler as coordenadas (X, Y)
de uma quantidade indeterminada de pontos no sistema cartesiano.
Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA
(nesta situação sem escrever mensagem alguma).
     y
     ^
 Q2  |  Q1
 ---------> x
 Q3  |  Q4
"""


def input_coordinates() -> tuple[int, int]:
    print(f"Digite os valores das coordenadas X e Y:")
    return int(input()), int(input())


def quadrante() -> None:
    x, y = input_coordinates()

    while x != 0 and y != 0:
        if x > 0 and y > 0:
            print("QUADRANTE Q1")
        elif x < 0 < y:
            print("QUADRANTE Q2")
        elif x < 0 and y < 0:
            print("QUADRANTE Q3")
        elif x > 0 > y:
            print("QUADRANTE Q4")
        x, y = input_coordinates()


if __name__ == "__main__":
    quadrante()
