/* Problema "coordenadas"
 Leia os valores das coordenadas X e Y de um ponto no plano
 cartesiano. A seguir, determine qual o quadrante ao qual pertence o
 ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
 mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
 “Eixo X” ou “Eixo Y”, conforme for a situação.

       y
   Q2  |  Q1
   --------- x
   Q3  |  Q4
*/

#include <stdio.h>
#include <string.h>

int main()
{
  double x, y;
  char quadrant[50] = "Origem";

  printf("Valor de X: ");
  scanf("%lf", &x);

  printf("Valor de Y: ");
  scanf("%lf", &y);

  if (x > 0 && y > 0)
  {
    strcpy(quadrant, "Q1");
  }
  else if (x < 0 && y > 0)
  {
    strcpy(quadrant, "Q2");
  }
  else if (x < 0 && y < 0)
  {
    strcpy(quadrant, "Q3");
  }
  else if (x > 0 && y < 0)
  {
    strcpy(quadrant, "Q4");
  }
  else if (x == 0 && y != 0)
  {
    strcpy(quadrant, "Eixo Y");
  }
  else if (y == 0 && x != 0)
  {
    strcpy(quadrant, "Eixo X");
  }

  printf("%s\n", quadrant);

  return 0;
}