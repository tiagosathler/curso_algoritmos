""" Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora,
e a quantidade de horas trabalhadas por ele(a).
Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa
"""


def pagamento() -> None:
    name = input("Nome: ")

    value_per_hour = float(input("Valor por hora: "))

    worked_hours = int(input("Horas trabalhadas: "))

    payment = value_per_hour * worked_hours

    print(f"O pagamento para {name} deve ser de R$ {payment:.1f}")


if __name__ == "__main__":
    pagamento()
