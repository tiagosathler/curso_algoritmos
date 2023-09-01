""" Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa.
Para isso, você deve construir um programa que leia a letra "C" ou "F"
indicando em qual escala vai ser informada uma temperatura.
Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais.
A seguir são dadas as fórmulas para converter de Fahrenheit para Celsius
C = (F - 32) * 5 / 9
F = C * 9 / 5 + 32
"""


def temperatura() -> None:
    scale = input("Você vai digitar a temperatura em qual escala (C/F)? ").upper()[0]

    converted_scale: str
    supplied_temp: float
    converted_temp: float

    if scale == "F":
        converted_scale = "Celsius"
        supplied_temp = float(input("Digite a temperatura em Fahrenheit: "))
        converted_temp = (supplied_temp - 32) * 5 / 9

    elif scale == "C":
        converted_scale = "Fahrenheit"
        supplied_temp = float(input("Digite a temperatura em Celsius: "))
        converted_temp = supplied_temp * 9 / 5 + 32

    else:
        print("Opção inválida!")
        return None

    print(f"Temperatura convertida: {converted_temp:.2f}º {converted_scale}")


if __name__ == "__main__":
    temperatura()
