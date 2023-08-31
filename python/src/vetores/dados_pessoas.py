""" Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas.
Fazer um programa que calcule e escreva a maior e a menor altura do grupo,
a média de altura das mulheres, e o número de homens.
"""

MIN_SIZE = 1
MAX_SIZE = 10

MEN = "men"
WOMEN = "women"
HEIGHT_AVERAGE = "height_average"
MALE_HEIGHT_AVERAGE = "male_height_average"
FEMALE_HEIGHT_AVERAGE = "female_height_average"
SHORTER_HEIGHT = "shorter_height"
SHORTEST_PERSON_GENDER = "shortest_person_gender"
GREATER_HEIGHT = "greater_height"
TALLEST_PERSON_GENDER = "tallest_person_gender"


class Person:
    gender: str
    height: float

    def __init__(self, gender="", height=0.0) -> None:
        self.gender = gender
        self.height = height


def input_person(size: int) -> list[Person]:
    people: [Person] = [Person() for _ in range(size)]

    for i in range(len(people)):
        print(f"Dados da {i + 1}ª pessoa de {len(people)}:")

        height = float(input("Altura (m): "))
        gender = input("Gênero ('F/f' ou 'M/m'): ").upper()[0]

        while gender != 'M' and gender != 'F':
            gender = input("Gênero ('F/f' ou 'M/m'): ").upper()[0]

        people[i] = Person(gender, height)

    return people


def get_statistics(people: list[Person]) -> dict:
    men = 0
    women = 0

    height_average = 0.0
    male_height_average = 0.0
    female_height_average = 0.0

    for person in people:
        height_average += person.height / len(people)

        if person.gender == 'M':
            men += 1
            male_height_average += person.height
        else:
            women += 1
            female_height_average += person.height

    if men > 0:
        male_height_average /= men

    if women > 0:
        female_height_average /= women

    greater_height = people[0].height
    tallest_person_gender = people[0].gender

    shorter_height = people[0].height
    shortest_person_gender = people[0].gender

    for person in people:
        if person.height > greater_height:
            greater_height = person.height
            tallest_person_gender = person.gender

        if person.height < shorter_height:
            shorter_height = person.height
            shortest_person_gender = person.gender

    return {
        MEN: men,
        WOMEN: women,
        HEIGHT_AVERAGE: height_average,
        MALE_HEIGHT_AVERAGE: male_height_average,
        FEMALE_HEIGHT_AVERAGE: female_height_average,
        SHORTER_HEIGHT: shorter_height,
        SHORTEST_PERSON_GENDER: shortest_person_gender,
        GREATER_HEIGHT: greater_height,
        TALLEST_PERSON_GENDER: tallest_person_gender,
    }


def print_statistics(s: dict) -> None:
    total = s.get(MEN, 0) + s.get(WOMEN, 0)

    print(f"\nAltura média geral: {s.get(HEIGHT_AVERAGE, 0.0):.2f}m")
    print(f"\nMenor altura: {s.get(SHORTER_HEIGHT, 0.0):.2f}m ('{s.get(SHORTEST_PERSON_GENDER)}')")
    print(f"\nMaior altura: {s.get(GREATER_HEIGHT, 0.0):.2f}m ('{s.get(TALLEST_PERSON_GENDER)}')")

    if s.get(MEN, 0) > 0:
        men_percentage = 100 * s.get(MEN)/total
        print(f"\nQuantidade de homens: {s.get(MEN)} ({men_percentage:.1f} %)")
        print(f"Média da altura dos homens: {s.get(MALE_HEIGHT_AVERAGE):.2f}m")
    else:
        print("\nNÃO HÁ HOMENS!")

    if s.get(WOMEN, 0) > 0:
        women_percentage = 100 * s.get(WOMEN)/total
        print(f"\nQuantidade de mulheres: {s.get(WOMEN)} ({women_percentage:.1f} %)")
        print(f"Média da altura das mulheres: {s.get(FEMALE_HEIGHT_AVERAGE):.2f}m")
    else:
        print("\nNÃO HÁ MULHERES!")


def dados_pessoas() -> None:
    n = int(input(f"Quantos alunos você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    people: [Person] = input_person(n)

    statistics: dict = get_statistics(people)

    print_statistics(statistics)


if __name__ == "__main__":
    dados_pessoas()
