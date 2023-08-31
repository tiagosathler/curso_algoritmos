""" Problema "par_impar"
Leia um valor inteiro N.
Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
"""

MIN_NUMBER = 1
MAX_NUMBER = 15


def par_impar() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_NUMBER} e máximo de {MAX_NUMBER})? "))

    if not MIN_NUMBER < n < MAX_NUMBER:
        n = MIN_NUMBER

    for i in range(1, n + 1):
        x = int(input(f"Rodada {i} de {n} - Digite um número: "))

        parity = 0

        if x != 0:
            #           signal         mod of x        mod of odd x
            #       /------------\    /--------\    /-----------------\
            parity = (abs(x) // x) * (abs(x) % 2 + (2 * abs(x) + 1) % 2)

        if parity == -2:
            print("ÍMPAR NEGATIVO")
        elif parity == -1:
            print("PAR NEGATIVO")
        elif parity == 0:
            print("NULO")
        elif parity == 1:
            print("PAR POSITIVO")
        elif parity == 2:
            print("ÍMPAR POSITIVO")
        else:
            print("OPS, ALGO SAIU ERRADO...")
            break


if __name__ == "__main__":
    par_impar()
