""" Problema "consumo"
Fazer um programa para ler a distância total (em km)
percorrida por um carro, bem como o total de combustível
gasto por este carro ao percorrer tal distância.
Seu programa deve mostrar o consumo médio do carro, com três casas decimais.
"""


def consumo() -> None:
    distance = float(input("Distância percorrida: "))

    spent_fuel = float(input("Combustível gasto: "))

    average_fuel = distance / spent_fuel

    print(f"Consumo médio = {average_fuel:.3f}")


if __name__ == "__main__":
    consumo()
