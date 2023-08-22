/* Problema "medidas"
 Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
 a) a área do quadrado que tem lado A
 b) a área do triângulo retângulo que base A e altura B
 c) a área do trapézio que tem bases A e B, e altura C
*/

#include <stdio.h>

int main()
{
  double a, b, c, square_area, triangle_area, trapeze_area;

  printf("Digite a medida A: ");
  scanf("%lf", &a);

  printf("Digite a medida B: ");
  scanf("%lf", &b);

  printf("Digite a medida C: ");
  scanf("%lf", &c);

  square_area = a * a;
  triangle_area = a * b / 2.0;
  trapeze_area = ((a + b) * c) / 2.0;

  printf("ÁREA DO QUADRADO = %.2lf\n", square_area);
  printf("ÁREA DO TRIÂNGULO = %.2lf\n", triangle_area);
  printf("ÁREA DO TRAPÉZIO = %.2lf\n", trapeze_area);

  return 0;
}