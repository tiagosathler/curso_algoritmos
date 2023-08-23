/* Problema "soma_linhas"
 Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
 de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
 seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
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

int main()
{
  int n = readSizeOf("linhas");
  int m = readSizeOf("colunas");

  double matrix[n][m];
  double sumOfRows[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite os %d elementos da %dª linha (de %d linhas):\n", m, i + 1, n);
    for (int j = 0; j < m; j++)
    {
      scanf("%lf", &matrix[i][j]);
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

  printf("\n\nVETOR GERADO:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%.1lf\n", sumOfRows[i]);
  }

  return 0;
}