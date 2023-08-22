/* Problema "alturas"
 Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
 tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
 bem como os nomes dessas pessoas caso houver.
*/

#include <stdio.h>
#include <string.h>

#define MIN_SIZE 1
#define MAX_SIZE 10
#define MINOR 16

int main()
{
  int n;
  double heightAverage = 0.0, perMinors = 0.0;

  printf("Quantos pessoas serão digitadas (máximo de 10)? ");
  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  double heights[n];
  int ages[n];
  char names[n][10];

  for (int i = 0; i < n; i++)
  {
    printf("\nDados da %dª de %d:\n", i + 1, n);

    printf("Nome: ");
    scanf("%s", names[i]);

    printf("Idade: ");
    scanf("%d", &ages[i]);

    printf("Altura: ");
    scanf("%lf", &heights[i]);
  }

  for (int i = 0; i < n; i++)
  {
    heightAverage += heights[i] / n;
  }

  for (int i = 0; i < n; i++)
  {
    if (ages[i] < MINOR)
    {
      perMinors += (double)100 / n;
    }
  }

  printf("\nAltura média: %.2lf", heightAverage);

  printf("\nPessoas com menos de %d anos: %.1lf %%\n", MINOR, perMinors);
  
  for (int i = 0; i < n; i++)
  {
    if (ages[i] < MINOR)
    {
      printf("- %s\n", names[i]);
    }
  }

  return 0;
}