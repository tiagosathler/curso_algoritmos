/* Problema "tabuada"
 Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
*/

#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "\nDeseja a tabuada para qual valor? ";
  cin >> n;

  for (int i = 0; i <= 10; i++)
  {
    cout << i << " x " << n << " = " << n * i << endl;
  }

  return 0;
}