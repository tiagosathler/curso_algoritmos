/* Problema "abaixo_da_media"
 Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
 mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
 os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
*/

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n;
  double average = 0.0;

  printf("Quantos valores vai ter cada vetor (máximo de 10)? ");
  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  double vector[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite um número (%d de %d): ", i + 1, n);
    scanf("%lf", &vector[i]);
  }

  for (int i = 0; i < n; i++)
  {
    average += vector[i] / n;
  }

  printf("\nMÉDIA DO VETOR = %.3lf\n", average);
  printf("ELEMENTOS ABAIXO DA MÉDIA:\n");

  for (int i = 0; i < n; i++)
  {
    if (vector[i] < average)
    {
      printf("%.1lf\n", vector[i]);
    }
  }
}