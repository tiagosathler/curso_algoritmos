/* Problema "maior_posicao"
 Faça um programa que leia N números reais positivos e armazene-os em um vetor. Em seguida, mostrar na tela
 o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
 considerando a primeira posição como 0 (zero).
*/

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n, position = 0;
  double biggestNumber;

  printf("Quantos números voce vai digitar (máximo de 10)? ");
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

  biggestNumber = vector[0];

  for (int i = 1; i < n; i++)
  {
    if (vector[i] > biggestNumber)
    {
      biggestNumber = vector[i];
      position = i;
    }
  }

  printf("\nMAIOR VALOR = %.1lf", biggestNumber);
  printf("\nPOSIÇÃO DO MAIOR VALOR = %d\n", position);
  return 0;
}