/* Problema "experiencias"
 Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
 organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
 quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
 laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
 informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
 utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
 valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
 inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
 de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
 cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
 percentual deve ser apresentado com dois dígitos após o ponto.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MIN_CASES 1
#define MAX_CASES 15

typedef struct
{
  int mice;
  int frogs;
  int rabbits;
} Animals;

void clearInput()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF) { }
}

int inputAnimals(char choice, Animals *animals)
{
  int quantity, *animalPointer;
  char animalKind[10];

  switch (choice)
  {
  case 'R':
    animalPointer = &animals->mice;
    strcpy(animalKind, "ratos");
    break;
  case 'S':
    animalPointer = &animals->frogs;
    strcpy(animalKind, "sapos");
    break;
  case 'C':
    animalPointer = &animals->rabbits;
    strcpy(animalKind, "coelhos");
    break;
  default:
    printf("Opção inválida! Tente novamente.\n");
    return 0;
  }

  printf("Digite a quantidade de %s: ", animalKind);
  scanf("%d", &quantity);

  if (quantity <= 0)
  {
    printf("Quantidade inválida! Tente novamente.\n");
    return 0;
  }

  *animalPointer += quantity;

  return 1;
}

int main()
{
  Animals animals = {0, 0, 0};

  int n, total;
  double perMice, perFrogs, perRabbits;
  char choice;

  printf("Quantos casos de teste serão digitados? ");
  scanf("%d", &n);

  if (n < MIN_CASES || n > MAX_CASES)
  {
    n = MIN_CASES;
  }

  for (int i = 1; i <= n; i++)
  {
    do
    {
      printf("\nEntrada número %d de %d:\n", i, n);

      printf("Tipo de cobaia: (R)ato, (S)apo, (C)oelho: ");

      clearInput();
      scanf("%c", &choice);
      choice = toupper(choice);
    } while (!inputAnimals(choice, &animals));
  }

  total = animals.mice + animals.frogs + animals.frogs;
  perMice = (double)100 * animals.mice / total;
  perFrogs = (double)100 * animals.frogs / total;
  perRabbits = (double)100 * animals.rabbits / total;

  printf("\nRELATÓRIO FINAL:\n");
  printf("Total: %d cobaias\n\n", total);
  printf("Total de coelhos: %d (%.2lf %%)\n", animals.rabbits, perRabbits);
  printf("Total de ratos: %d (%.2lf %%)\n", animals.mice, perMice);
  printf("Total de sapos: %d (%.2lf %%)\n", animals.frogs, perFrogs);

  return 0;
}