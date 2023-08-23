/* Problema "negativos_matriz"
 Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros. Em seguida, mostrar na tela somente os números negativos da matriz.
*/

#include <stdio.h>

#define MIN_SIZE 1
#define MAX_SIZE 10

int readSizeOf(char dimension[])
{
  int d;
  printf("Qual a quantidade de %s da matriz (máximo de %d)? ", dimension, MAX_SIZE);

  scanf("%d", &d);

  if (d < MIN_SIZE || d > MAX_SIZE)
  {
    d = MAX_SIZE;
  }

  return d;
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
      printf("Elemento [%d, %d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\n\nVALORES NEGATIVOS: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (matrix[i][j] < 0)
        printf("%d\n", matrix[i][j]);
    }
  }

  return 0;
}
