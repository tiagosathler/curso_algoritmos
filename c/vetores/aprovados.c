/* Problema "aprovados"
 Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
 no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
 os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
 igual a 6.0 (seis).
*/

#include <stdio.h>
#include <string.h>

#define MIN_SIZE 1
#define MAX_SIZE 10
#define LENGTH_OF_NAME 30
#define NUM_OF_GRADES 2
#define PASS_GRADE 6

typedef struct Student
{
  char name[LENGTH_OF_NAME];
  double grades[NUM_OF_GRADES];
  double average;
} Student;

void readText(char *buffer, int length)
{
  fgets(buffer, length, stdin);
  strtok(buffer, "\n");
}

void cleanupInput()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{
  int n, approvedStudents = 0;

  printf("Quantos pessoas você vai digitar (máximo de 10)? ");

  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  Student students[n];

  for (int i = 0; i < n; i++)
  {
    printf("\nDados da %dª de %d:\n", i + 1, n);

    printf("Nome: ");
    cleanupInput();
    readText(students[i].name, LENGTH_OF_NAME);

    for (int j = 0; j < NUM_OF_GRADES; j++)
    {
      printf("%dª nota: ", j + 1);
      scanf("%lf", &students[i].grades[j]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    students[i].average = 0.0;
    for (int j = 0; j < NUM_OF_GRADES; j++)
    {
      students[i].average += students[i].grades[j] / NUM_OF_GRADES;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (students[i].average >= PASS_GRADE)
    {
      approvedStudents++;
    }
  }

  if (approvedStudents > 0)
  {
    printf("\nALUNOS APROVADOS:\n");

    for (int i = 0; i < n; i++)
    {
      if (students[i].average >= PASS_GRADE)
      {
        printf(" - %s\n", students[i].name);
      }
    }
  }
  else
  {
    printf("\nNENHUM ALUNO FOI APROVADO!\n");
  }

  return 0;
}
