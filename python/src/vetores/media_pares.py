""" Problema "media_pares"
Fazer um programa para ler um vetor de N números inteiros.
Em seguida, mostrar na tela a média aritmética somente dos números pares lidos, com uma casa decimal.
Se nenhum número par for digitado, mostrar a mensagem "NENHUM NÚMERO PAR"
"""

MIN_SIZE = 1
MAX_SIZE = 10


def media_pares() -> None:
    n = int(input(f"Quantos elementos vai ter o vetor (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector: [int] = n * [0]

    for i in range(len(vector)):
        vector[i] = int(input(f"Digite um número ({i + 1} de {len(vector)}): "))

    average_of_even_numbers = 0.0
    even_number_count = 0

    for value in vector:
        if value % 2 == 0 and value != 0:
            average_of_even_numbers += value
            even_number_count += 1

    if even_number_count > 0:
        average_of_even_numbers /= even_number_count
        print(f"MÉDIA DOS PARES = {average_of_even_numbers:.1f}")
    else:
        print("NENHUM NÚMERO PAR!")


if __name__ == "__main__":
    media_pares()
