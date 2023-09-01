""" Problema "lanchonete"
 Uma lanchonete possui vários produtos. Cada produto possui um código
 e um preço. Você deve fazer um programa para ler o código e a
 quantidade comprada de um produto (suponha um código válido), e daí
 informar qual o valor a ser pago, com duas casas decimais, conforme
 tabela de produtos abaixo.
 *--------------------------------------*
 | Código do produto | Preço do produto |
 |-------------------|------------------|
 |         1         |      R$ 5.00     |
 |         2         |      R$ 3.50     |
 |         3         |      R$ 4.80     |
 |         4         |      R$ 8.90     |
 |         5         |      R$ 7.32     |
 *--------------------------------------*
"""


def lanchonete() -> None:
    product_code = int(input("Código do produto comprado: "))

    price: float

    if product_code == 1:
        price = 5.00
    elif product_code == 2:
        price = 3.50
    elif product_code == 3:
        price = 4.80
    elif product_code == 4:
        price = 8.90
    elif product_code == 5:
        price = 7.32
    else:
        print("Produto inexistente!")
        return None

    quantity = int(input("Quantidade comprada: "))

    amount_to_pay = price * quantity
    print(f"Valor a pagar: R$ {amount_to_pay:.2f}")


if __name__ == "__main__":
    lanchonete()
