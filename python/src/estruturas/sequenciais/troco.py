""" Problema "troco"
 * Fazer um programa para calcular o troco no processo de pagamento de um produto
 * de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade
 * de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente
 * (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco
 * a ser devolvido ao cliente.
"""


def troco() -> None:
    price = float(input("Preço unitário do produto: "))

    quantity = int(input("Quantidade comprada: "))

    money_received = float(input("Dinheiro recebido: "))

    change = money_received - price * quantity

    print(f"TROCO = {change:.2f}")


if __name__ == "__main__":
    troco()
