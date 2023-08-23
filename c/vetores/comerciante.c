/* Problema "comerciante"
 Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
 mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
 venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
 proporcionaram:
  - lucro < 10%
  - 10% ≤ lucro ≤ 20%
  - lucro > 20%
 Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
 o lucro total.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_SIZE 1
#define MAX_SIZE 10
#define LENGTH_OF_NAME 30
#define PROFIT_LIMIT_1 10
#define PROFIT_LIMIT_2 20

typedef struct Product
{
  char name[LENGTH_OF_NAME];
  double salePrice;
  double purchasePrice;
  double profit;
} Product;

void cleanupInput()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{
  int n;
  int loss = 0, profitCountRange1 = 0, profitCountRange2 = 0, profitCountRange3 = 0;
  double totalSale = 0.0, totalPurchase = 0.0, totalProfit = 0.0;

  printf("Serão digitados dados de quantos produtos (máximo de %d)? ", MAX_SIZE);

  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  Product products[n];

  for (int i = 0; i < n; i++)
  {
    char gender;
    printf("\nProduto %d de %d:\n", i + 1, n);

    cleanupInput();
    printf("Nome: ");
    scanf("%s", products[i].name);

    printf("Preço de compra: ");
    scanf("%lf", &products[i].purchasePrice);

    printf("Preço de venda: ");
    scanf("%lf", &products[i].salePrice);

    products[i].profit = products[i].salePrice - products[i].purchasePrice;
  }

  for (int i = 0; i < n; i++)
  {
    double profitPercentage = 100 * products[i].profit / products[i].purchasePrice;
    if (profitPercentage > PROFIT_LIMIT_2)
    {
      profitCountRange3++;
    }
    else if (profitPercentage >= PROFIT_LIMIT_1)
    {
      profitCountRange2++;
    }
    else if (profitPercentage >= 0)
    {
      profitCountRange1++;
    }
    else
    {
      loss++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    totalSale += products[i].salePrice;
    totalPurchase += products[i].purchasePrice;
    totalProfit += products[i].profit;
  }

  printf("\n\nRELATÓRIO\n");
  printf("Lucro abaixo de %d%%: %d\n", PROFIT_LIMIT_1, profitCountRange1);
  printf("Lucro entre de %d%% e %d%%: %d\n", PROFIT_LIMIT_1, PROFIT_LIMIT_2, profitCountRange2);
  printf("Lucro acima de %d%%: %d\n", PROFIT_LIMIT_2, profitCountRange3);
  printf("Prejuízos: %d\n", loss);

  printf("\nValor total de compras: R$ %.2lf\n", totalPurchase);
  printf("\nValor total de vendas: R$ %.2lf\n", totalSale);
  printf("\nLucro total: R$ %.2lf\n\n", totalProfit);

  return 0;
}