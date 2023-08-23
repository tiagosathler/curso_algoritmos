/* Problema "retangulo"
 Fazer um programa para ler as medidas da base e altura de um retângulo.
 Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais,
*/

#include <math.h>
#include <stdio.h>

int main()
{
  double base, height, area, perimeter, diagonal;

  printf("Base do triângulo: ");
  scanf("%lf", &base);

  printf("Altura do triângulo: ");
  scanf("%lf", &height);

  area = height * base;
  perimeter = 2 * (base + height);
  diagonal = sqrt(base * base + height * height);

  printf("ÁREA = %.4lf\n", area);
  printf("PERÍMETRO = %.4lf\n", perimeter);
  printf("DIAGONAL = %.4lf\n", diagonal);

  return 0;
}