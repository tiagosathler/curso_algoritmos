""" Problema "maior_posicao"
Faça um programa que leia N números reais positivos e armazene-os em um vetor.
Em seguida, mostrar na tela o maior número do vetor (supor não haver empates).
Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero).
"""

MIN_SIZE = 1
MAX_SIZE = 10


def maior_posicao() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector: [float] = n * [0.0]

    for i in range(len(vector)):
        vector[i] = float(input(f"Digite um número ({i + 1} de {n}): "))

    position = 0
    biggest_number = vector[position]

    for i in range(len(vector)):
        if vector[i] > biggest_number:
            biggest_number = vector[i]
            position = i

    print(f"MAIOR VALOR = {biggest_number:.1f}")
    print(f"POSIÇÃO DO MAIOR VALOR = {position}")


if __name__ == "__main__":
    maior_posicao()
