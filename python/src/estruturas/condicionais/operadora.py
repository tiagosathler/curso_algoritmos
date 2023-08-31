""" Problema "operadora"
Uma operadora de telefonia cobra R$ 50.00 por um plano básico
que dá direito a 100 minutos de telefone.
Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00.
Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu,
daí mostrar o valor a ser pago.
"""

ALLOWANCE_MINUTES = 100
EXCESS_MINUTES_COST = 2.00


def operadora() -> None:
    minutes = int(input("Digite a quantidade de minutos: "))

    total_cost = 50.00

    if minutes > ALLOWANCE_MINUTES:
        total_cost += (minutes - ALLOWANCE_MINUTES) * EXCESS_MINUTES_COST

    print(f"VALOR A PAGAR = R$ {total_cost:.2f}")


if __name__ == "__main__":
    operadora()
