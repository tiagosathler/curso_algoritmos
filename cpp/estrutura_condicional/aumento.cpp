/* Problema "aumento"
 Uma empresa vai conceder um aumento percentual de
 salário aos seus funcionários dependendo de quanto
 cada pessoa ganha, conforme tabela ao lado. Fazer um
 programa para ler o salário de uma pessoa, daí mostrar
 qual o novo salário desta pessoa depois do aumento,
 quanto foi o aumento e qual foi a porcentagem de
 aumento.

 Salário atual
 Até R$ 1000.00                      -> Aumento 20%
 Acima de R$ 1000.00 até R$ 3000.00  -> Aumento 15%
 Acima de R$ 3000.00 até R$ 8000.00  -> Aumento 10%
 Acima de R$ 8000.00                 -> Aumento 5%
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double actualSalary, newSalary, salaryIncrement;
  int percentage;

  cout << "Digite o salário da pessoa: ";
  cin >> actualSalary;

  if (actualSalary <= 1000.00)
  {
    percentage = 20;
  }
  else if (actualSalary <= 3000.00)
  {
    percentage = 15;
  }
  else if (actualSalary <= 8000.00)
  {
    percentage = 10;
  }
  else
  {
    percentage = 5;
  }
  salaryIncrement = actualSalary * percentage / 100.00;
  newSalary = actualSalary + salaryIncrement;

  cout << fixed << setprecision(2);
  cout << "Novo salário = R$ " << newSalary << endl;
  cout << "Aumento = R$ " << salaryIncrement << endl;
  cout << "Porcentagem = " << percentage << "%" << endl;

  return 0;
}