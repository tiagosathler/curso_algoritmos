/* Problema "abaixo_da_media"
 Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
 mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
 os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
*/

#include <iomanip>
#include <iostream>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;

int main()
{
  int n;
  double average = 0.0;

  cout << "Quantos valores vai ter cada vetor (máximo de 10)? ";
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
    average += vector[i] / n;
  }

  cout << fixed << setprecision(3) << "\nMÉDIA DO VETOR = " << average << endl;
  cout << "ELEMENTOS ABAIXO DA MÉDIA:\n";

  cout << fixed << setprecision(1);

  for (int i = 0; i < n; i++)
  {
    if (vector[i] < average)
    {
      cout << vector[i] << endl;
    }
  }
}