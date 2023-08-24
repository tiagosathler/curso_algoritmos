/* Problema "negativos"
 Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
 e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/

#include <iostream>

using namespace std;

int main()
{
  const int MIN_SIZE = 1;
  const int MAX_SIZE = 10;

  int n;

  cout << "Quantos números você vai digitar? ";
  cin >> n;

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  int vector[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um número (" << i + 1 << " de " << n << "): ";
    cin >> vector[i];
  }

  cout << "\nNÚMEROS NEGATIVOS:\n";

  for (int i = 0; i < n; i++)
  {
    if (vector[i] < 0)
    {
      cout << vector[i] << endl;
    }
  }

  return 0;
}