/* Problema "cada_linha"
 Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
 de cada linha. Suponha não haver empates.
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
  int highestNumberPerRow[n];

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
    int highestNumber = matrix[i][0];
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] > highestNumber)
      {
        highestNumber = matrix[i][j];
      }
    }
    highestNumberPerRow[i] = highestNumber;
  }

  cout << "\n\nMAIOR ELEMENTO DE CADA LINHA: \n";
  for (int i = 0; i < n; i++)
  {
    cout << "Linha " << i + 1 << ": " << highestNumberPerRow[i] << endl;
  }

  return 0;
}