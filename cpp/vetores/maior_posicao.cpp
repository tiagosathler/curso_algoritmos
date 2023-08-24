/* Problema "maior_posicao"
 Faça um programa que leia N números reais positivos e armazene-os em um vetor. Em seguida, mostrar na tela
 o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
 considerando a primeira posição como 0 (zero).
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  const int MIN_SIZE = 1;
  const int MAX_SIZE = 10;

  int n, position = 0;
  double biggestNumber;

  cout << "Quantos números voce vai digitar (máximo de 10)? ";
  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  double vector[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um número (" << i + 1 << " de " << n << "): ";
    cin >> vector[i];
  }

  biggestNumber = vector[0];

  for (int i = 1; i < n; i++)
  {
    if (vector[i] > biggestNumber)
    {
      biggestNumber = vector[i];
      position = i;
    }
  }

  cout << fixed << setprecision(1) << "\nMAIOR VALOR = " << biggestNumber << endl;
  cout << "\nPOSIÇÃO DO MAIOR VALOR (base 0) = " << position << endl;

  return 0;
}