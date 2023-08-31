""" Problema "pares_consecutivos"
O programa deve ler um valor inteiro X indefinidas vezes.
(O programa irá parar quando o valor de X for igual a 0).

Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X,
inclusive o X, se for par.

Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
4+6+8+10+12, enquanto que se o valor de entrada for 11, por exemplo, a saída deve ser 80,
que é a soma de 12+14+16+18+20.

Para CONSECUTIVE_EVEN_NUMBERS = 5
 x += x % 2 # obtém o número par logo acima de x

 summation = (x + 0) + (x + 2) + (x + 4) + (x + 6) + (x + 8)
 summation = 5 * x + 20
 summation = 5 * x + 5 * 4

 Isto é:
 summation = CONSECUTIVE_EVEN_NUMBERS * ( x + CONSECUTIVE_EVEN_NUMBERS - 1)
"""

CONSECUTIVE_EVEN_NUMBERS = 5


def pares_consecutivos() -> None:
    message = "Digite um número inteiro (0 para encerrar): "

    x = int(input(message))

    while x != 0:
        summation = CONSECUTIVE_EVEN_NUMBERS * (x + x % 2 + CONSECUTIVE_EVEN_NUMBERS - 1)

        print(f"SOMA = {summation}")

        x = int(input(message))

    else:
        print("BYE!")


if __name__ == "__main__":
    pares_consecutivos()
