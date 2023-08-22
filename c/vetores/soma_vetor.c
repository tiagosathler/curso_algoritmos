/* Problema "soma_vetor"
 Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
 - Imprimir todos os elementos do vetor
 - Mostrar na tela a soma e a média dos elementos do vetor
*/

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n;
  double average, summation = 0.0;

  printf("Quantos números você vai digitar (máximo de 10)? ");
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
    summation += vector[i];
  }

  average = summation / n;

  printf("\nVALORES = ");
  for (int i = 0; i < n; i++)
  {
    printf("%.1lf ", vector[i]);
  }

  printf("\nSOMA = %.2lf", summation);
  printf("\nMÉDIA = %.2lf\n", average);

  return 0;
}