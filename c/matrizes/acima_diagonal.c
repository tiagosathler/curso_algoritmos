/* Problema "acima_diagonal"
 Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 contendo números inteiros. Mostrar a soma dos elementos acima da
 diagonal principal.
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
  int summation = 0;

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
    for (int j = i + 1; j < n; j++)
    {
      summation += matrix[i][j];
    }
  }

  printf("\n\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", summation);

  return 0;
}
