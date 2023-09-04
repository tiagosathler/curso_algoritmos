/* Problema "par_impar"
 Leia um valor inteiro N.
 Este valor será a quantidade de números inteiros que serão lidos em seguida.
 Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
 se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
 apenas NULO.
*/

#include <iostream>

using namespace std;

int main()
{
  const int MIN_NUMBER = 1;
  const int MAX_NUMBER = 15;

  int n, x, remainder, signal, parity;

  cout << "Quantos números você vai digitar? ";
  cin >> n;

  if (n < MIN_NUMBER || n > MAX_NUMBER)
  {
    n = MIN_NUMBER;
  }

  for (int i = 1; i <= n; i++)
  {
    parity = 0;
    cout << "\nRodada " << i << " de " << n << " - Digite um número: ";
    cin >> x;

    if (x != 0)
    {
      remainder = x % 2;
      signal = (2 * x + 1) % 2;
      parity = remainder + signal;
    }

    switch (parity)
    {
    case -2:
      cout << "ÍMPAR NEGATIVO\n";
      break;
    case -1:
      cout << "PAR NEGATIVO\n";
      break;
    case 0:
      cout << "NULO\n";
      break;
    case 1:
      cout << "PARA POSITIVO\n";
      break;
    case 2:
      cout << "ÍMPAR POSITIVO\n";
      break;
    default:
      cout << "OPS, ALGO SAIU ERRADO...\n";
      break;
    }
  }

  return 0;
}