/* Problema "troco_verificado"
 Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
 O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
 e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
 ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
 valor restante conforme exemplo.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int quantity;
  double price, received, change;

  cout << "Preço unitário do produto: ";
  cin >> price;

  cout << "Quantidade comprada: ";
  cin >> quantity;

  cout << "Dinheiro recebido: ";
  cin >> received;

  change = received - price * quantity;

  cout << fixed << setprecision(2);

  if (change >= 0)
  {
    cout << "TROCO = R$ " << change << endl;
  }
  else
  {
    cout << "DINHEIRO INSUFICIENTE. FALTAM R$ " << -change << endl;
  }

  return 0;
}