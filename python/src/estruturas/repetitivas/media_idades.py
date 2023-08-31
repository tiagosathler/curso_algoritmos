""" Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo.
O último dado, que não entrará nos cálculos, contém um valor de idade negativa.
Calcular e imprimir a idade média deste grupo de indivíduos.
Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSÍVEL CALCULAR".
"""


def media_idades() -> None:
    print("Digite as idades (negativo para sair):")

    age = int(input())
    count = 0
    summation = 0.0

    while age >= 0:
        count += 1
        summation += age
        age = int(input())

    if count != 0:
        average = summation / count
        print(f"MÉDIA = {average:.2f}")

    else:
        print("IMPOSSÍVEL CALCULAR!")


if __name__ == "__main__":
    media_idades()
