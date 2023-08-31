""" Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo
à maior distância que conseguir. Você deve criar um programa para,
dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
"""


def dardo() -> None:
    print("Digite as três distâncias:")

    a = float(input())
    b = float(input())
    c = float(input())

    greatest = c
    if a >= b and a >= c:
        greatest = a
    elif b >= c:
        greatest = b

    print(f"MAIOR DISTÂNCIA = {greatest:.2f}")


if __name__ == "__main__":
    dardo()
