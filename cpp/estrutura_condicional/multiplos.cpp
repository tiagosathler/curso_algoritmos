/* Problema "multiplos"
 Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
 números podem ser digitados em qualquer ordem.
*/

#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "Digite dois números inteiros:\n";

  cin >> a;
  cin >> b;

  if (a != 0 && b != 0 && (a % b == 0 || b % a == 0))
  {
    cout << "São múltiplos\n";
  }
  else
  {
    cout << "Não são múltiplos\n";
  }

  return 0;
}