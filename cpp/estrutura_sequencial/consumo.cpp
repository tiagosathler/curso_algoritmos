/* Problema "consumo"
 Fazer um programa para ler a distância total (em km)
 percorrida por um carro, bem como o total de  combustível
 gasto por este carro ao percorrer tal distância.
 Seu programa deve mostrar o consumo médio do carro, com três casas decimais.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double spent_fuel, average_fuel;
  int distance;

  cout << "Distância percorrida: ";
  cin >> distance;

  cout << "Combustível gasto: ";
  cin >> spent_fuel;

  average_fuel = distance / spent_fuel;

  cout << fixed << setprecision(3);
  cout << "Consumo médio = " << average_fuel << endl;

  return 0;
}