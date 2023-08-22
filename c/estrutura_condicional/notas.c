/* Problema "notas"
 Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
 uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
 ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
 mensagem "REPROVADO", conforme exemplos.
*/

#include <stdio.h>

int main()
{
  double a, b, finalGrade;

  printf("Digite a primeira nota: ");
  scanf("%lf", &a);

  printf("Digite a segunda nota: ");
  scanf("%lf", &b);

  finalGrade = a + b;
  
  printf("NOTAL FINAL = %.1lf\n", finalGrade);

  if (finalGrade >= 60)
  {
    printf("APROVADO!\n");
  }
  else
  {
    printf("REPROVADO!\n");
  }

  return 0;
}
