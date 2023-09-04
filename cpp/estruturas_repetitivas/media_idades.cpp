/* Problema "media_idades"
 Faça um programa para ler um número indeterminado de dados,
 contendo cada um, a idade de um indivíduo.
 O último dado, que não entrará nos cálculos,
 contém um valor de idade negativa. Calcular
 e imprimir a idade média deste grupo de indivíduos.
 Se for entrado um valor negativo na primeira vez,
 mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int age = 0, count = 0, summation = 0;
  double average;

  cout << "Digite as idades (negativo para sair):\n";

  cin >> age;

  while (age >= 0)
  {
    count++;
    summation += age;
    cin >> age;
  }

  if (count != 0)
  {
    average = (double)summation / count;
    cout << fixed << setprecision(2) << "MÉDIA = " << average << endl;
  }
  else
  {
    cout << "IMPOSSÍVEL CALCULAR!\n";
  }

  return 0;
}