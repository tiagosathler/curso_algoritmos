/* Problema "cada_linha"
 Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
 de cada linha. Suponha não haver empates.
*/

#include <stdio.h>

#define MIN_SIZE 1
#define MAX_SIZE 10

int readSize()
{
  int d;
  printf("Qual a ordem da matriz (máximo de %d)? ", MAX_SIZE);

  scanf("%d", &d);

  if (d < MIN_SIZE || d > MAX_SIZE)
  {
    d = MAX_SIZE;
  }

  return d;
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
      printf("Elemento [%d, %d]: ", i, j);
      scanf("%d", &matrix[i][j]);
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

  printf("\n\nMAIOR ELEMENTO DE CADA LINHA: \n");
  for (int i = 0; i < n; i++)
  {
    printf("Linha %d: %d\n", i + 1, highestNumberPerRow[i]);
  }

  return 0;
}