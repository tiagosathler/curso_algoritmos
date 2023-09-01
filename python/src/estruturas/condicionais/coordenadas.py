""" Problema "coordenadas"
 Leia os valores das coordenadas X e Y de um ponto no plano cartesiano.
 A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4).
 Se o ponto estiver na origem, escreva a mensagem “Origem”.
 Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
      y
      ^
  Q2  |  Q1
  ----*----> x
  Q3  |  Q4
"""


def coordenadas() -> None:
    x = float(input("Valor de X: "))

    y = float(input("Valor de Y: "))

    quadrant = "Origem"
    if x > 0 and y > 0:
        quadrant = "Q1"
    elif x < 0 < y:
        quadrant = "Q2"
    elif x < 0 and y < 0:
        quadrant = "Q3"
    elif x > 0 > y:
        quadrant = "Q4"
    elif x == 0 and y != 0:
        quadrant = "Eixo Y"
    elif x != 0:
        quadrant = "Eixo X"

    print(f"{quadrant}")


if __name__ == "__main__":
    coordenadas()
