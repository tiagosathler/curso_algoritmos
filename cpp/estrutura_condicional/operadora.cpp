/* Problema "operadora"
 Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
 telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
 ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  const int ALLOWANCE_MINUTES = 100;
  const double EXCESS_MINUTES_COST = 2.00;

  int minutes;

  double totalCost = 50.00;

  cout << "Digite a quantidade de minutos: ";
  cin >> minutes;

  if (minutes > ALLOWANCE_MINUTES)
  {
    totalCost += (minutes - ALLOWANCE_MINUTES) * EXCESS_MINUTES_COST;
  }

  cout << fixed << setprecision(2) << "VALOR A PAGAR = R$ " << totalCost << endl;

  return 0;
}