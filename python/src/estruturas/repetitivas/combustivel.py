""" Problema "combustivel"
Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido
(codificado da seguinte forma: 1. Álcool 2. Gasolina 3. Diesel 4. Fim).
Caso o usuário informe um código inválido (fora da faixa de 1 a 4)
deve ser solicitado um novo código (até que seja válido).
O programa será encerrado quando o código informado for o número 4,
devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.
"""


def combustivel() -> None:
    print("Códigos:")
    print("1 - álcool")
    print("2 - gasolina")
    print("3 - diesel")

    message = "Informe um código (1, 2, 3) ou 4 para parar: "

    alcohol_count = 0
    gasoline_count = 0
    diesel_count = 0

    option = int(input(message))

    while option != 4:
        if option == 1:
            alcohol_count += 1
        elif option == 2:
            gasoline_count += 1
        elif option == 3:
            diesel_count += 1
        option = int(input(message))

    else:
        print("MUITO OBRIGADO")
        print(f"  Álcool: {alcohol_count:2d}")
        print(f"Gasolina: {gasoline_count:2d}")
        print(f"  Diesel: {diesel_count:2d}")


if __name__ == "__main__":
    combustivel()
