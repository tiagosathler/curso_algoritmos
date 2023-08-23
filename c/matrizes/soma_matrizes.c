/* Problema "soma_matrizes"
 Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
 cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
 dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
*/

#include <stdio.h>

#define MIN_SIZE 1
#define MAX_SIZE 10

int readSizeOf(char dimension[])
{
  int d;
  printf("Quantas %s vai ter cada matriz (máximo de %d)? ", dimension, MAX_SIZE);

  scanf("%d", &d);

  if (d < MIN_SIZE || d > MAX_SIZE)
  {
    d = MAX_SIZE;
  }

  return d;
}

void readMatrix(
    int *matrix,
    const int lines,
    const int columns,
    const char matrixChar)
{
  printf("\nDigite os valores da matriz %c:\n", matrixChar);
  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("Elemento [%d, %d]: ", i, j);
      int *element = matrix + columns * i + j;
      scanf("%d", element);
    }
  }
}

void printMatrixSum(
    int *matrix,
    const int lines,
    const int columns)
{
  printf("\n\nMATRIZ SOMA:\n");
  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%d ", *(matrix + columns * i + j));
    }
    printf("\n");
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