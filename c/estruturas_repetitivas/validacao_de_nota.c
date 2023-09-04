/* Problema "validacao_de_nota"
 Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
 (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.
*/

#include <stdio.h>
#define LOWER_BOUND 0
#define UPPER_BOUND 10

double readGrade()
{
  double grade;

  scanf("%lf", &grade);

  while (grade < LOWER_BOUND || grade > UPPER_BOUND)
  {
    printf("Valor inválido! Tente novamente: ");
    scanf("%lf", &grade);
  }

  return grade;
}

int main()
{
  double average, summation = 0.0;

  printf("Digite a primeira nota: ");
  summation += readGrade();

  printf("Digite a segunda nota: ");
  summation += readGrade();

  average = summation / 2.0;
  printf("MÉDIA = %.2lf\n", average);

  return 0;
}