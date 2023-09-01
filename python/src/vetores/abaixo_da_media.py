""" Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais.
Em seguida, mostrar na tela a média aritmética de todos os elementos com três casas decimais.
Depois mostrar todos os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
"""

MIN_SIZE = 1
MAX_SIZE = 10


def abaixo_da_media() -> None:
    n = int(input(f"Quantos elementos vai ter o vetor (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    vector: [float] = n * [0.0]

    for i in range(len(vector)):
        vector[i] = float(input(f"Digite um número ({i + 1} de {len(vector)}): "))

    average = 0.0
    for value in vector:
        average += value / len(vector)

    print(f"MÉDIA DO VETOR = {average:.3f}")
    print("ELEMENTOS ABAIXO DA MÉDIA:")

    for value in vector:
        if value < average:
            print(f"{value:.1f}")


if __name__ == "__main__":
    abaixo_da_media()
