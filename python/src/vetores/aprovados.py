""" Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovado aqueles cuja média das notas seja maior ou
igual a 6,0 (seis).
"""

MIN_SIZE = 1
MAX_SIZE = 10

NUM_OF_GRADES = 2
PASS_GRADE = 6


class Student:
    _name: str
    _grades: list[float]
    _average: float

    def __init__(self) -> None:
        self._name = ""
        self._average = 0.0
        self._grades = NUM_OF_GRADES * [0.0]

    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str) -> None:
        self._name = name

    def get_grades(self) -> list[float]:
        return self._grades

    def get_average(self) -> float:
        return self._average

    def set_average(self, average: float) -> None:
        self._average = average


def aprovados() -> None:
    n = int(input(f"Quantos alunos você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    students: [Student] = [Student() for _ in range(n)]

    for i in range(len(students)):
        print(f"Dados da {i + 1}ª pessoa de {len(students)}:")

        students[i].set_name(input("Nome: "))

        for j in range(len(students[i].get_grades())):
            students[i].get_grades()[j] = float(input(f"{j + 1}ª nota: "))

    for student in students:
        average = 0.0

        for grade in student.get_grades():
            average += grade / len(student.get_grades())

        student.set_average(average)

    approved_students = 0

    for student in students:
        if student.get_average() >= PASS_GRADE:
            approved_students += 1

    if approved_students > 0:
        print("ALUNOS APROVADOS:")

        for student in students:
            if student.get_average() >= PASS_GRADE:
                print(f" - {student.get_name()}")

    else:
        print("NENHUM ALUNO FOI APROVADO!")


if __name__ == "__main__":
    aprovados()
