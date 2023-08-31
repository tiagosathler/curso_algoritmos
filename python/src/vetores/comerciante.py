""" Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra
e preço de venda das mesmas.
Fazer um programa que leia tais dados e determine e escreva quantas mercadorias proporcionaram:
 - lucro < 10%
 - 10% ≤ lucro ≤ 20%
 - lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
"""

MIN_SIZE = 1
MAX_SIZE = 10

PROFIT_LIMIT_1 = 10
PROFIT_LIMIT_2 = 20

LOSS = "loss"
PROFIT_COUNT_RANGE1 = "profit_count_range1"
PROFIT_COUNT_RANGE2 = "profit_count_range2"
PROFIT_COUNT_RANGE3 = "profit_count_range3"
TOTAL_SALE = "total_sale"
TOTAL_PURCHASE = "total_purchase"
TOTAL_PROFIT = "total_profit"


class Product:
    name: str
    sale_price: float
    purchase_price: float
    profit: float

    def __init__(self, name="", sale_price=0.0, purchase_price=0.0) -> None:
        self.name = name
        self.sale_price = sale_price
        self.purchase_price = purchase_price
        self.profit = sale_price - purchase_price

    def calcule_profit(self):
        self.profit = self.sale_price - self.purchase_price


def get_product(size: int) -> list[Product]:
    products: list[Product] = [Product() for _ in range(size)]

    for i in range(len(products)):
        print(f"Produto {i + 1} de {len(products)}:")

        products[i].name = input("Nome: ")
        products[i].purchase_price = float(input("Preço de compra: "))
        products[i].sale_price = float(input("Preço de venda: "))

        products[i].calcule_profit()

    return products


def get_statistics(products: list[Product]) -> dict:
    loss = 0

    profit_count_range1 = 0
    profit_count_range2 = 0
    profit_count_range3 = 0

    for p in products:
        profit_percentage = 100 * p.profit / p.purchase_price

        if profit_percentage > PROFIT_LIMIT_2:
            profit_count_range3 += 1
        elif profit_percentage >= PROFIT_LIMIT_1:
            profit_count_range2 += 1
        elif profit_percentage >= 0:
            profit_count_range1 += 1
        else:
            loss += 1

    total_sale = 0
    total_purchase = 0
    total_profit = 0

    for p in products:
        total_sale += p.sale_price
        total_purchase += p.purchase_price
        total_profit += p.profit

    return {
        LOSS: loss,
        PROFIT_COUNT_RANGE1: profit_count_range1,
        PROFIT_COUNT_RANGE2: profit_count_range2,
        PROFIT_COUNT_RANGE3: profit_count_range3,
        TOTAL_SALE: total_sale,
        TOTAL_PURCHASE: total_purchase,
        TOTAL_PROFIT: total_profit
    }


def print_statistic(s: dict) -> None:
    print("RELATÓRIO")
    print(f"\nLucro abaixo de {PROFIT_LIMIT_1}%: {s.get(PROFIT_COUNT_RANGE1, 0)}")
    print(f"Lucro entre de {PROFIT_LIMIT_1} e {PROFIT_LIMIT_2}%: {s.get(PROFIT_COUNT_RANGE2, 0)}")
    print(f"Lucro acima de {PROFIT_LIMIT_2}%: {s.get(PROFIT_COUNT_RANGE3, 0)}")
    print(f"Prejuízos: {s.get(LOSS, 0)}")

    print(f"\nValor total de compras: R$ {s.get(TOTAL_PURCHASE, 0.0):.2f}")
    print(f"Valor total de vendas: R$ {s.get(TOTAL_SALE, 0.0):.2f}")
    print(f"Lucro total: R$ {s.get(TOTAL_PROFIT, 0.0):.2f}")


def comerciante() -> None:
    n = int(input(f"Serão digitados dados de quantos produtos (mínimo de {MIN_SIZE} e máximo de {MAX_SIZE})? "))

    if not MIN_SIZE < n <= MAX_SIZE:
        n = MIN_SIZE

    products: list[Product] = get_product(n)
    statistics: dict = get_statistics(products)
    print_statistic(statistics)


if __name__ == "__main__":
    comerciante()
