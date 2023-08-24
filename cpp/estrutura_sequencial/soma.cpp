/* Problema "soma"
 Fazer um programa para ler dois valores inteiros X e Y,
 e depois mostrar na tela o valor da soma destes números.
*/

#include <iostream>

using namespace std;

int main()
{
  int x, y, summation;

  cout << "Digite o valor de X: ";
  cin >> x;

  cout << "Digite o valor de Y: ";
  cin >> y;

  summation = x + y;

  cout << "SOMA = " << summation << endl;

  return 0;
}