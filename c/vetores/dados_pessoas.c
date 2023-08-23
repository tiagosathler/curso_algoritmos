/* Problema "dados_pessoas"
 Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
 que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
 de homens.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_SIZE 1
#define MAX_SIZE 10

typedef struct Person
{
  char gender;
  double height;
} Person;

void cleanupInput()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{
  int n, men = 0, women = 0;
  double shorterHeight, greaterHeight;
  double heightAverage = 0.0, maleHeightAverage = 0.0, femaleHeightAverage = 0.0;
  char shortestPersonGender, tallestPersonGender;

  printf("Quantos pessoas serão digitadas (máximo de 10)? ");

  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  Person people[n];

  for (int i = 0; i < n; i++)
  {
    char gender;
    printf("\nDados da %dª pessoa de %d:\n", i + 1, n);

    printf("Altura (m): ");
    scanf("%lf", &people[i].height);

    do
    {
      cleanupInput();
      printf("Gênero ('F/f' ou 'M/m'): ");
      scanf("%c", &gender);
      gender = toupper(gender);
    } while (gender != 'M' && gender != 'F');

    people[i].gender = gender;
  }

  for (int i = 0; i < n; i++)
  {
    heightAverage += people[i].height / n;

    if (people[i].gender == 'M')
    {
      men++;
      maleHeightAverage += people[i].height;
    }
    else
    {
      women++;
      femaleHeightAverage += people[i].height;
    }
  }

  if (men > 0)
  {
    maleHeightAverage /= men;
  }

  if (women > 0)
  {
    femaleHeightAverage /= women;
  }

  greaterHeight = people[0].height;
  tallestPersonGender = people[0].gender;

  shorterHeight = people[0].height;
  shortestPersonGender = people[0].gender;

  for (int i = 1; i < n; i++)
  {
    if (people[i].height > greaterHeight)
    {
      greaterHeight = people[i].height;
      tallestPersonGender = people[i].gender;
    }
    if (people[i].height < shorterHeight)
    {
      shorterHeight = people[i].height;
      shortestPersonGender = people[i].gender;
    }
  }

  printf("\nAltura média geral: %.2lfm\n", heightAverage);

  printf("Menor altura: %.2lfm ('%c')\n", shorterHeight, shortestPersonGender);

  printf("Maior altura: %.2lfm ('%c')\n", greaterHeight, tallestPersonGender);

  if (men > 0)
  {
    double menPercentage = (double)100 * men / n;
    printf("\nQuantidade de homens: %d (%.1lf %%)\n", men, menPercentage);
    printf("Média da altura dos homens: %.2lfm\n", maleHeightAverage);
  }
  else
  {
    printf("\nNÃO HÁ HOMENS!\n");
  }

  if (women > 0)
  {
    double womenPercentage = (double)100 * women / n;
    printf("\nQuantidade de mulheres: %d (%.1lf %%)\n", women, womenPercentage);
    printf("Média da altura dos mulheres: %.2lfm\n", femaleHeightAverage);
  }
  else
  {
    printf("\nNÃO HÁ MULHERES!\n");
  }

  return 0;
}