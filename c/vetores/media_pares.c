/* Problema "media_pares"
 Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
 aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
 digitado, mostrar a mensagem "NENHUM NUMERO PAR"
 */

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n, evenNumbersCount = 0;
  double averageOfEvenNumbers = 0.0;

  printf("Quantos valores vai ter cada vetor (máximo de 10)? ");
  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  int vector[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite um número (%d de %d): ", i + 1, n);
    scanf("%i", &vector[i]);
  }

  for (int i = 0; i < n; i++)
  {
    if (vector[i] % 2 == 0)
    {
      averageOfEvenNumbers += vector[i];
      evenNumbersCount++;
    }
  }

  if (evenNumbersCount > 0)
  {
    averageOfEvenNumbers /= evenNumbersCount;
    printf("\nMÉDIA DOS PARES = %.1lf\n", averageOfEvenNumbers);
  }
  else
  {
    printf("\nNENHUM NÚMERO PAR!\n");
  }
}