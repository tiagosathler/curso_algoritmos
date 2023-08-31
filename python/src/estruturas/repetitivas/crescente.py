""" Problema "crescente"
 Leia uma quantidade indeterminada de duplas de valores inteiros X e Y.
 Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados
 em ordem crescente ou decrescente.
 O programa deve finalizar quando forem digitados dois valores iguais.
"""


def input_numbers(message: str) -> tuple[int, int]:
    print(message)
    return int(input()), int(input())


def crescente() -> None:
    a, b = input_numbers("Digite dois números inteiros (a) e (b):")

    while a != b:
        if a > b:
            print("DECRESCENTE!")
        elif a < b:
            print("CRESCENTE!")
        else:
            break

        a, b = input_numbers("Digite outro dois números inteiros (a) e (b):")

    else:
        print("IGUAIS!")


if __name__ == "__main__":
    crescente()
