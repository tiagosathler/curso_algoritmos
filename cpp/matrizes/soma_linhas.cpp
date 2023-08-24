/* Problema "soma_linhas"
 Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
 de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
 seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/

#include <iomanip>
#include <iostream>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;

int readSizeOf(string dimension)
{
  int d;
  cout << "Quantas " << dimension << " vai ter cada matriz (máximo de " << MAX_SIZE << ")? ";

  cin >> d;

  return d < MIN_SIZE || d > MAX_SIZE ? MAX_SIZE : d;
}

int main()
{
  int n = readSizeOf("linhas");
  int m = readSizeOf("colunas");

  double matrix[n][m];
  double sumOfRows[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite os " << m << " elementos da " << i + 1 << "ª linha (de " << n << " linhas):\n";
    for (int j = 0; j < m; j++)
    {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    sumOfRows[i] = 0;
    for (int j = 0; j < m; j++)
    {
      sumOfRows[i] += matrix[i][j];
    }
  }

  cout << "\n\nVETOR GERADO:\n";
  for (int i = 0; i < n; i++)
  {
    cout << fixed << setprecision(1) << sumOfRows[i] << endl;
  }

  return 0;
}