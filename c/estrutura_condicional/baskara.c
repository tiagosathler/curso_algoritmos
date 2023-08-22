/* Problema "baskara"
 Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
 de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
 conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
*/

#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, delta, x1, x2;

  printf("Coeficiente a: ");
  scanf("%lf", &a);

  printf("Coeficiente b: ");
  scanf("%lf", &b);

  printf("Coeficiente c: ");
  scanf("%lf", &c);

  delta = b * b - 4 * a * c;

  if (delta >= 0 && a != 0)
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf\n", x2);
  }
  else
  {
    printf("Esta equação não possui raízes reais\n");
  }

  return 0;
}