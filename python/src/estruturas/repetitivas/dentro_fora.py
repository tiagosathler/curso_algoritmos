""" Problema "dentro_fora"
Leia um valor inteiro N.
Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo.
"""

LOWER_BOUND = 10
UPPER_BOUND = 20

MIN_NUMBERS = 1
MAX_NUMBERS = 10


def dentro_fora() -> None:
    n = int(input(f"Quantos números você vai digitar (mínimo de {MIN_NUMBERS} e máximo de {MAX_NUMBERS})? "))

    if not MIN_NUMBERS < n < MAX_NUMBERS:
        n = MIN_NUMBERS

    out_of_range_numbers = 0
    in_range_numbers = 0

    for i in range(1, n + 1):
        x = int(input(f"Digite {i}º número de {n}: "))

        if LOWER_BOUND <= x <= UPPER_BOUND:
            in_range_numbers += 1
        else:
            out_of_range_numbers += 1

    print(f"Faixa: {LOWER_BOUND} <= x <= {UPPER_BOUND}")
    print(f"{in_range_numbers:2} DENTRO")
    print(f"{out_of_range_numbers:2} FORA")


if __name__ == "__main__":
    dentro_fora()
