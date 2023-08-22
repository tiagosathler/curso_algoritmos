/* Problema "tempo_de_jogo"
 Leia a hora inicial e a hora final de um jogo.
 A seguir calcule a duração do jogo, sabendo que o mesmo
 pode começar em um dia e terminar em outro, tendo uma
 duração mínima de 1 hora e máxima de 24 horas.
*/

#include <stdio.h>

int main()
{
  int start, end, duration;

  printf("Hora inicial: ");
  scanf("%d", &start);

  printf("Hora final: ");
  scanf("%d", &end);

  if (end > start)
  {
    duration = end - start;
  }
  else
  {
    duration = 24 - (start - end);
  }

  printf("O JOGO DUROU %d HORA(S)\n", duration);

  return 0;
}