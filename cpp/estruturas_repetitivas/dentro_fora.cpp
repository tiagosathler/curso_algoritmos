/* Problema "dentro_fora"
 Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
 Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
 conforme exemplo
*/

#include <iostream>

using namespace std;

int main()
{
  const int LOWER_BOUND = 10;
  const int UPPER_BOUND = 20;

  int n, x, inside = 0, outside = 0;

  cout << "Quantos números você vai digitar? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um número: ";
    cin >> x;

    if (LOWER_BOUND <= x && x <= UPPER_BOUND)
    {
      inside++;
    }
    else
    {
      outside++;
    }
  }

  cout << inside << " DENTRO" << endl;
  cout << outside << " FORA" << endl;

  return 0;
}