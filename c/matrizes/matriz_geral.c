/* Problema "matriz_geral"
 Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
 Em seguida, fazer as seguintes ações:
  a) calcular e imprimir a soma de todos os elementos positivos da matriz.
  b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
  c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
  d) imprimir os elementos da diagonal principal da matriz.
  e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
     a matriz alterada.
*/

#include <stdio.h>

#define MIN_SIZE 1
#define MAX_SIZE 10

int readSize()
{
  int d;
  printf("Qual a ordem da matriz (máximo de %d)? ", MAX_SIZE);

  scanf("%d", &d);

  return d < MIN_SIZE || d > MAX_SIZE ? MAX_SIZE : d;
}

int main()
{
  int row, column;
  int n = readSize();

  double matrix[n][n];
  double positiveSummation = 0.0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("Elemento [%d, %d]: ", i, j);
      scanf("%lf", &matrix[i][j]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] > 0)
        positiveSummation += matrix[i][j];
    }
  }

  printf("\n\nSOMA DOS POSITIVOS: %.1lf\n", positiveSummation);

  printf("\n\nEscolha uma linha (base 0): ");
  scanf("%d", &row);

  row = row < 0 || row >= n ? 0 : row;

  printf("LINHA ESCOLHIDA (%d): ", row);
  for (int j = 0; j < n; j++)
  {
    printf("%.1lf ", matrix[row][j]);
  }

  printf("\n\nEscolha uma coluna (base 0): ");
  scanf("%d", &column);

  column = column < 0 || column >= n ? 0 : column;

  printf("COLUNA ESCOLHIDA (%d): ", column);
  for (int i = 0; i < n; i++)
  {
    printf("%.1lf ", matrix[i][column]);
  }

  printf("\n\nDIAGONAL PRINCIPAL: ");
  for (int i = 0; i < n; i++)
  {
    printf("%.1lf ", matrix[i][i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] < 0)
        matrix[i][j] *= matrix[i][j];
    }
  }

  printf("\n\nMATRIZ ALTERADA: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%.1lf  ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
