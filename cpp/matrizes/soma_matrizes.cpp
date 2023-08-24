/* Problema "soma_matrizes"
 Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
 cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
 dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
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

void readMatrix(
    int *matrix,
    const int lines,
    const int columns,
    const char matrixChar)
{
  cout << "\nDigite os valores da matriz " << matrixChar << ":\n";
  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << "Elemento [" << i << ", " << j << "]: ";
      cin >> *(matrix + columns * i + j);
    }
  }
}

void printMatrixSum(
    int *matrix,
    const int lines,
    const int columns)
{
  cout << "\n\nMATRIZ SOMA:\n";
  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << *(matrix + columns * i + j) << " ";
    }
    cout << endl;
  }
}

void sumMatrix(
    int *matrixA,
    int *matrixB,
    int *matrixC,
    const int lines,
    const int columns)
{
  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      int offset = columns * i + j;
      int *elementC = matrixC + offset;
      *elementC = *(matrixA + offset) + *(matrixB + offset);
    }
  }
}

int main()
{
  int n = readSizeOf("linhas");
  int m = readSizeOf("colunas");

  int matrixA[n][m];
  int matrixB[n][m];
  int matrixC[n][m];

  readMatrix((int *)matrixA, n, m, 'A');
  readMatrix((int *)matrixB, n, m, 'B');

  sumMatrix((int *)matrixA, (int *)matrixB, (int *)matrixC, n, m);

  printMatrixSum((int *)matrixC, n, m);

  return 0;
}