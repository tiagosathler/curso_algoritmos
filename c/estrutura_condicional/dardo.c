/* Problema "dardo"
 No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
 Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
 foi a maior.
*/

#include <stdio.h>

int main()
{
  double a, b, c, greatest;

  printf("Digite as três distâncias:\n");

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  if (a >= b && a >= c)
  {
    greatest = a;
  }
  else if (b >= c)
  {
    greatest = b;
  }
  else
  {
    greatest = c;
  }

  printf("MAIOR DISTÂNCIA = %.2lf\n", greatest);

  return 0;
}