/* Problema "duracao"
 Fazer um programa para ler uma duração de tempo em segundos,
 daí imprimir na tela esta duração no formato: horas:minutos:segundos.
*/

#include <stdio.h>

int main()
{
  int duration, hours, minutes, seconds;

  printf("Digite a duração em segundos: ");
  scanf("%d", &duration);

  hours = duration / 3600;
  minutes = duration % 3600 / 60;
  seconds = (duration % 3600) % 60;

  printf("%d : %2d : %2d\n", hours, minutes, seconds);

  return 0;
}