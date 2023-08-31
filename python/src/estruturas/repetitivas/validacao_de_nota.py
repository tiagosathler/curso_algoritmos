""" Problema "validacao_de_nota"
Faça um programa que leia as notas referentes às duas avaliações de um aluno.
Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
(uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada
separadamente.
"""

LOWER_BOUND = 0
UPPER_BOUND = 10


def read_grade(message: str) -> float:
    grade = float(input(message))

    while not LOWER_BOUND <= grade <= UPPER_BOUND:
        grade = float(input(f"Valor inválido! {message} "))

    return grade


def validacao_de_nota() -> None:
    summation = read_grade("Digite a primeira nota: ")

    summation += read_grade("Digite a segunda nota: ")

    average = summation / 2.0

    print(f"MÉDIA = {average:.2f}")


if __name__ == "__main__":
    validacao_de_nota()
