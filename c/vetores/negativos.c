/* Problema "negativos"
 Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
 e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n;

  printf("Quantos números você vai digitar? ");
  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  int vector[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite um número (%d de %d): ", i + 1, n);
    scanf("%d", &vector[i]);
  }

  printf("\nNÚMEROS NEGATIVOS:\n");

  for (int i = 0; i < n; i++)
  {
    if (vector[i] < 0)
    {
      printf("%d\n", vector[i]);
    }
  }

  return 0;
}