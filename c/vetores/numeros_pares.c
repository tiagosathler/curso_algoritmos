/* Problema "numeros_pares"
 Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
 tela todos os números pares, e também a quantidade de números pares.
*/

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n, quantity = 0;

  printf("Quantos números voce vai digitar (máximo de 10)? ");
  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  int vector[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &vector[i]);
  }

  printf("\nNÚMEROS PARES:\n");
  for (int i = 0; i < n; i++)
  {
    if (vector[i] % 2 == 0)
    {
      printf("%d ", vector[i]);
      quantity++;
    }
  }

  printf("\n\nQUANTIDADE DE PARES = %d\n", quantity);
  return 0;
}