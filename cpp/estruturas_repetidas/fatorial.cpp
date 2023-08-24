/* Problema "fatorial"
 Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
 fatorial de N.
*/

#include <iostream>

using namespace std;

int main()
{
  const int MIN_NUMBER = 0;

  const int MAX_NUMBER = 15;

  int n, factorial = 1;

  cout << "Digite o valor de N: ";
  cin >> n;

  if (n < MIN_NUMBER || n > MAX_NUMBER)
  {
    n = MAX_NUMBER;
  }

  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  cout << "FATORIAL DE " << n << " = " << factorial << endl;

  return 0;
}