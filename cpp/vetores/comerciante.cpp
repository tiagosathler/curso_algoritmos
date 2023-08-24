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

#include <iomanip>
#include <iostream>
#include <climits>
#include <string>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;
const short PROFIT_LIMIT_1 = 10;
const short PROFIT_LIMIT_2 = 20;

typedef struct Product
{
  string name;
  double salePrice;
  double purchasePrice;
  double profit;
} Product;

int main()
{
  int n;
  int loss = 0, profitCountRange1 = 0, profitCountRange2 = 0, profitCountRange3 = 0;
  double totalSale = 0.0, totalPurchase = 0.0, totalProfit = 0.0;

  cout << "Serão digitados dados de quantos produtos (máximo de " << MAX_SIZE << ")? ";

  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  Product products[n];

  for (int i = 0; i < n; i++)
  {
    char gender;
    cout << "\nProduto " << i + 1 << " de " << n << ":\n";

    cin.ignore(INT_MAX, '\n');
    cout << "Nome: ";
    getline(cin, products[i].name);

    cout << "Preço de compra: ";
    cin >> products[i].purchasePrice;

    cout << "Preço de venda: ";
    cin >> products[i].salePrice;

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

  cout << fixed << setprecision(2);
  cout << "\n\nRELATÓRIO\n";
  cout << "Lucro abaixo de " << PROFIT_LIMIT_1 << "%: " << profitCountRange1 << endl;
  cout << "Lucro entre de " << PROFIT_LIMIT_1 << " e " << PROFIT_LIMIT_2 << "%: " << profitCountRange2 << endl;
  cout << "Lucro acima de " << PROFIT_LIMIT_2 << "%: " << profitCountRange3 << endl;
  cout << "Prejuízos: " << loss << endl;

  cout << "\nValor total de compras: R$ " << totalPurchase << endl;
  cout << "Valor total de vendas: R$ " << totalSale << endl;
  cout << "Lucro total: R$ " << totalProfit << endl;

  return 0;
}