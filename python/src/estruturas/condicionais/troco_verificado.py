""" Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente.
Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.
Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem
informando o valor restante conforme exemplo.
"""


def troco_verificado() -> None:
    price = float(input("Preço unitário do produto: "))
    quantity = int(input("Quantidade comprada: "))
    received = float(input("Dinheiro recebido: "))

    change = received - price * quantity
    if change >= 0:
        print(f"TROCO = R$ {change:.2f}", )
    else:
        print(f"DINHEIRO INSUFICIENTE. FALTAM R$ {-change:.2f}")


if __name__ == "__main__":
    troco_verificado()
