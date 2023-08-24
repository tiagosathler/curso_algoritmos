/* Problema "menor_de_tres"
 Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
 números lidos. Em caso de empate, mostrar apenas uma vez.
*/

#include <iostream>

using namespace std;

int main()
{
  int a, b, c, smallest;

  cout << "Primeiro valor (a): ";
  cin >> a;

  cout << "Segundo valor (b): ";
  cin >> b;

  cout << "Terceiro valor (c): ";
  cin >> c;

  if (a <= b && a <= c)
  {
    smallest = a;
  }
  else if (b <= c)
  {
    smallest = b;
  }
  else
  {
    smallest = c;
  }

  cout << "MENOR = " << smallest << endl;

  return 0;
}