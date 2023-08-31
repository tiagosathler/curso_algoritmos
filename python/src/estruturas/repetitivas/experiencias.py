""" Problema "experiencias"
Maria acabou de iniciar seu curso de graduação na faculdade de medicina
e precisa de sua ajuda para organizar os experimentos de um laboratório
o qual ela é responsável.
Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório
e o percentual de cada tipo de cobaia utilizada.
Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos.
Para obter estas informações, ela sabe exatamente o número de experimentos
realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas
em cada experimento.
Faça um programa que leia um valor inteiro N que indica os vários casos de teste
que segue. Cada caso de teste contém um inteiro que representa a quantidade
de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R: Rato S: Sapo C: Coelho).
Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas,
sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
"""

MIN_CASES = 1
MAX_CASES = 15

MICE_KEY = "R"
MICE_NAME = "ratos"
FROGS_KEY = "S"
FROGS_NAME = "sapos"
RABBITS_KEY = "C"
RABBITS_NAME = "coelhos"

KEY = "KEY"
NAME = "NAME"


def input_choice() -> dict[str, str]:
    animal_key_and_name: dict[str, str] = {}

    message = ("Tipo de cobaia: "
               f"({MICE_NAME.upper()[0]}){MICE_NAME.lower()[1:]},"
               f"({FROGS_NAME.upper()[0]}){FROGS_NAME.lower()[1:]},"
               f"({RABBITS_NAME.upper()[0]}){RABBITS_NAME.lower()[1:]}: ")

    key = input(message).upper()[0]

    if key == MICE_KEY:
        animal_key_and_name[KEY] = MICE_KEY
        animal_key_and_name[NAME] = MICE_NAME

    elif key == FROGS_KEY:
        animal_key_and_name[KEY] = FROGS_KEY
        animal_key_and_name[NAME] = FROGS_NAME

    elif key == RABBITS_KEY:
        animal_key_and_name[KEY] = RABBITS_KEY
        animal_key_and_name[NAME] = RABBITS_NAME

    else:
        print("Opção inválida! Tente novamente.")

    return animal_key_and_name


def input_animal_quantity(animal_key_and_name: dict[str, str], animals_count: dict[str, int]) -> bool:
    key = animal_key_and_name[KEY]
    name = animal_key_and_name[NAME]

    quantity = int(input(f"Digite a quantidade de {name}: "))

    if quantity <= 0:
        print("Quantidade inválida (menor que 0)! Tente novamente.")
        return False

    animals_count[key] += quantity
    return True


def print_report(animals_count: dict[str, int]) -> None:
    mice = animals_count[MICE_KEY]
    frogs = animals_count[FROGS_KEY]
    rabbits = animals_count[RABBITS_KEY]

    total = mice + frogs + rabbits

    per_mice = 100.0 * mice / total
    per_frogs = 100.0 * frogs / total
    per_rabbits = 100.0 * rabbits / total

    print("RELATÓRIO FINAL:")
    print(f"Total: {total} cobaias\n")
    print(f"Total de {RABBITS_NAME.lower()}: {rabbits:3d} ({per_rabbits:.2f} %)")
    print(f"  Total de {MICE_NAME.lower()}: {mice:3d} ({per_mice:.2f} %)")
    print(f"  Total de {FROGS_NAME.lower()}: {frogs:3d} ({per_frogs:.2f} %)")


def experiencias() -> None:
    n = int(input(f"Quantos casos de teste serão digitados (mínimo de {MIN_CASES} e máximo de {MAX_CASES})? "))

    if not MIN_CASES < n <= MAX_CASES:
        n = MIN_CASES

    animals_count: dict[str, int] = {
        MICE_KEY: 0,
        FROGS_KEY: 0,
        RABBITS_KEY: 0
    }

    for i in range(1, n + 1):
        inputted = False

        while not inputted:
            print(f"Entrada número {i} de {n}:")

            animal_key_and_name = input_choice()

            if animal_key_and_name.get(KEY) and animal_key_and_name.get(NAME):
                inputted = input_animal_quantity(animal_key_and_name, animals_count)

    print_report(animals_count)


if __name__ == "__main__":
    experiencias()
