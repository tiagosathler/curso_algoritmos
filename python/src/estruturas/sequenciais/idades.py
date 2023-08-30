""" Problema "idades"
 * Fazer um programa para ler o nome e idade de duas pessoas.
 * Ao const mostrar uma mensagem com os nomes e a idade média
 * entre essas pessoas, com uma casa decimal
"""


def idades() -> None:
    print("Dados da primeira pessoa:")
    name1 = input("Nome: ")

    age1 = int(input("Idade: "))

    print("Dados da segunda pessoa:")
    name2 = input("Nome: ")

    age2 = int(input("Idade: "))

    average_age = (age1 + age2) / 2.0

    print(f"A idade média de {name1} e {name2} é de {average_age:.1f} anos.")


if __name__ == "__main__":
    idades()
