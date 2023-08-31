""" Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve
no primeiro e segundo semestres de uma disciplina anual.
Em seguida, mostrar a nota const que o aluno obteve (com uma casa decimal)
no ano juntamente com um texto explicativo.
Caso a nota const do aluno seja inferior a 60,00,
mostrar a mensagem "REPROVADO", conforme exemplos.
"""

GRADE_CRITERIA = 60.0


def notas() -> None:
    grade_a = float(input("Digite a primeira nota: "))

    grade_b = float(input("Digite a segunda nota: "))

    final_grade = grade_a + grade_b

    print(f"NOTAL FINAL = {final_grade:.1f}")

    if final_grade >= GRADE_CRITERIA:
        print("APROVADO!")
    else:
        print("REPROVADO!")


if __name__ == "__main__":
    notas()
