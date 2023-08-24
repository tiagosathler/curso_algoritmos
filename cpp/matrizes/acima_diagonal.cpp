/* Problema "acima_diagonal"
 Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 contendo números inteiros. Mostrar a soma dos elementos acima da
 diagonal principal.
*/

#include <iostream>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;

int readSize()
{
  int d;
  cout << "Qual a ordem da matriz (máximo de " << MAX_SIZE << ")? ";

  cin >> d;

  return d < MIN_SIZE || d > MAX_SIZE ? MAX_SIZE : d;
}

int main()
{
  int n = readSize();

  int matrix[n][n];
  int summation = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << ", " << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      summation += matrix[i][j];
    }
  }

  cout << "\n\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << summation << endl;

  return 0;
}
