""" Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
"""

MIN_SIZE = 1
MAX_SIZE = 10
MINOR = 16


class Person:
    name: str
    age: int
    height: float


def alturas() -> None:
    n = int(input(f"Quantos pessoas serão digitadas (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    people: [Person] = n * [Person()]

    for i in range(len(people)):
        print(f"Dados da {i + 1}ª pessoa de {len(people)}:")

        people[i].name = input("Nome: ")
        people[i].age = int(input("Idade: "))
        people[i].height = float(input("Altura: "))

    height_average = 0.0

    for person in people:
        height_average += person.height / n

    per_minors = 0.0

    for person in people:
        if person.age < MINOR:
            per_minors += 100 / len(people)

    print(f"Altura média: {height_average:.2f}")

    print(f"Pessoas com menos de {MINOR} anos: {per_minors:.1f} %")

    for person in people:
        if person.age < MINOR:
            print(f"- {person.name}")


if __name__ == "__main__":
    alturas()
