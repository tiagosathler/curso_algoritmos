/* Problema "pagamento"
 Fazer um programa para ler o nome de um(a) funcionário(a),
 o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a).
 Ao final, mostrar o valor do pagamento do funcionário com  uma mensagem explicativa
*/

#include <climits>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  double value_per_hour, payment;
  int worked_hours;

  cout << "Nome: ";
  getline(cin, name);

  cout << "Valor por hora: ";
  cin >> value_per_hour;

  cout << "Horas trabalhadas: ";
  cin >> worked_hours;

  payment = value_per_hour * worked_hours;

  cout << fixed << setprecision(2);
  cout << "O pagamento para " << name << "deve ser de R$ " << payment << endl;

  return 0;
}