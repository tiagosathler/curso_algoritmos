/* Problema "negativos_matriz"
 Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros. Em seguida, mostrar na tela somente os números negativos da matriz.
*/

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

  int matrix[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << "Elemento [" << i << ", " << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  cout << "\n\nVALORES NEGATIVOS: \n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (matrix[i][j] < 0)
        cout << matrix[i][j] << endl;
    }
  }

  return 0;
}
