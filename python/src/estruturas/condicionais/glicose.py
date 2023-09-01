""" Problema "glicose"
 Fazer um programa para ler a quantidade de glicose
 no sangue de uma pessoa e depois mostrar na tela a
 classificação desta glicose conforme a tabela de
 referência abaixo:
 |----------------------------------------------|
 | Classificação  | Glicose                     |
 |----------------------------------------------|
 | Normal         | Até 100 mg/dl               |
 | Elevado        | Maior que 100 até 140 mg/dl |
 | Diabetes       | Maior de 140 mg/dl          |
 |----------------------------------------------|.
"""

NORMAL_LEVEL = 100.0
HIGH_LEVEL = 140.0


def glicose() -> None:
    glucose_level = float(input("Digite a medida da glicose: "))

    classification = "diabetes"

    if glucose_level <= NORMAL_LEVEL:
        classification = "normal"
    elif glucose_level <= HIGH_LEVEL:
        classification = "elevado"

    print(f"Classificação = {classification}")


if __name__ == "__main__":
    glicose()
