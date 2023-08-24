/* Problema "soma_vetor"
 Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
 - Imprimir todos os elementos do vetor
 - Mostrar na tela a soma e a média dos elementos do vetor
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  const int MIN_SIZE = 1;
  const int MAX_SIZE = 10;

  int n;
  double average, summation = 0.0;

  cout << "Quantos números você vai digitar (máximo de 10)? ";
  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  double vector[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um número (" << i + 1 << " de " << n << "): ";
    cin >> vector[i];
  }

  for (int i = 0; i < n; i++)
  {
    summation += vector[i];
  }

  average = summation / n;

  cout << "\nVALORES = ";
  for (int i = 0; i < n; i++)
  {
    cout << fixed << setprecision(1) << vector[i] << " ";
  }

  cout << "\nSOMA = " << summation << endl;
  cout << fixed << setprecision(2) << "MÉDIA = " << average << endl;

  return 0;
}