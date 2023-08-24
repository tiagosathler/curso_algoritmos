/* Problema "troco"
 Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
 O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
 e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
 mostrar o valor do troco a ser devolvido ao cliente.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double price, moneyReceived, change;
  int quantity;

  cout << "Preço unitário do produto: ";
  cin >> price;

  cout << "Quantidade comprada: ";
  cin >> quantity;

  cout << "Dinheiro recebido: ";
  cin >> moneyReceived;

  change = moneyReceived - price * quantity;

  cout << fixed << setprecision(2) << "TROCO = " << change << endl;

  return 0;
}