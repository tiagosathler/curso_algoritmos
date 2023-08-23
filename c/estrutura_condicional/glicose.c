/* Problema "glicose"
 Fazer um programa para ler a quantidade de glicose
 no sangue de uma pessoa e depois mostrar na tela a
 classificação desta glicose de acordo com a tabela de
 referência abaixo:

 |----------------------------------------------|
 | Classificação  | Glicose                     |
 |----------------------------------------------|
 | Normal         | Até 100 mg/dl               |
 | Elevado        | Maior que 100 até 140 mg/dl |
 | Diabetes       | Maior de 140 mg/dl          |
 |----------------------------------------------|
*/

#include <stdio.h>
#include <string.h>

int main()
{
  const double NORMAL_LEVEL = 100.0;
  const double HIGH_LEVEL = 140.0;
  double glucoseLevel;
  char classification[20] = "diabetes";

  printf("Digite a medida da glicose: ");
  scanf("%lf", &glucoseLevel);

  if (glucoseLevel <= NORMAL_LEVEL)
  {
    strcpy(classification, "normal");
  }
  else if (glucoseLevel <= HIGH_LEVEL)
  {
    strcpy(classification, "elevado");
  }

  printf("Classificação = %s\n", classification);

  return 0;
}