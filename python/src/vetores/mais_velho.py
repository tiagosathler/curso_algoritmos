""" Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades.
Os nomes devem ser armazenados em um vetor, e as idades em outro vetor.
Depois, mostrar na tela o nome da pessoa mais velha.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def mais_velho() -> None:
    n = int(input(f"Quantas pessoas você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE
    
    ages = n * [0]
    names = n * [""]

    for i in range(n):
        print(f"Dados da {i + 1}ª pessoa de {n}:")
        names[i] = input("Nome: ")
        ages[i] = int(input("Idade: "))

    older_age_index = 0
    older_age = ages[older_age_index]

    for i in range(1, n):
        if ages[i] > older_age:
            older_age = ages[i]
            older_age_index = i

    print(f"Pessoa mais velha: {names[older_age_index]}")


if __name__ == "__main__":
    mais_velho()
