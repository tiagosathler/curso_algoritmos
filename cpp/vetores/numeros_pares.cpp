/* Problema "numeros_pares"
 Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
 tela todos os números pares, e também a quantidade de números pares.
*/

#include <iostream>

using namespace std;

int main()
{
  const int MIN_SIZE = 1;
  const int MAX_SIZE = 10;

  int n, quantity = 0;

  cout << "Quantos números voce vai digitar (máximo de 10)? ";
  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  int vector[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vector[i];
  }

  cout << "\nNÚMEROS PARES:\n";
  for (int i = 0; i < n; i++)
  {
    if (vector[i] % 2 == 0)
    {
      cout << vector[i] << " ";
      quantity++;
    }
  }

  cout << "\n\nQUANTIDADE DE PARES = " << quantity << endl;

  return 0;
}