""" Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor.
Em seguida:
 - Imprimir todos os elementos do vetor
 - Mostrar na tela a soma e a média dos elementos do vetor
"""

MIN_SIZE = 1
MAX_SIZE = 10


def soma_vetor() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector: [float] = n * [0.0]

    for i in range(len(vector)):
        vector[i] = float(input(f"Digite um número ({i + 1} de {len(vector)}): "))

    summation = 0.0
    for value in vector:
        summation += value

    average = summation / len(vector)

    print("VALORES =", end="")

    for value in vector:
        print(f" {value:.1f}", end="")

    print(f"\nSOMA = {summation:.2f}")
    print(f"MÉDIA = {average:.2f}")


if __name__ == "__main__":
    soma_vetor()
