/* Problema "diagonal_negativos"
 Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
 negativos da matriz.
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

void readMatrix(int *matrix, const int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout << "Elemento [" << i << ", " << j << "]: ";
      cin >> *(matrix + size * i + j);
    }
  }
}

void getDiagonal(int *matrix, int *diagonal, int size)
{
  for (int i = 0; i < size; i++)
  {
    int *element = diagonal + i;
    for (int j = 0; j < size; j++)
    {
      if (i == j)
      {
        *element = *(matrix + size * i + j);
      }
    }
  }
}

int getNegatives(int *matrix, const int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (*(matrix + size * i + j) < 0)
        count++;
    }
  }
  return count;
}

void printDiagonal(int *diagonal, int size)
{
  cout << "\n\nDIAGONAL PRINCIPAL: \n";
  for (int i = 0; i < size; i++)
  {
    cout << *(diagonal + i) << " ";
  }
}

void printNegatives(int negatives)
{
  cout << "\n\nQUANTIDADE DE NEGATIVOS = " << negatives << endl;
}

int main()
{
  int n = readSize();

  int matrix[n][n];
  int diagonal[n];

  readMatrix((int *)matrix, n);
  getDiagonal((int *)matrix, diagonal, n);

  int negatives = getNegatives((int *)matrix, n);

  printDiagonal(diagonal, n);
  printNegatives(negatives);

  return 0;
}