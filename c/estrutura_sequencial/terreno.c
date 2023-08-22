/* Problema "terreno"
 Fazer um programa para ler as medidas da largura e
 comprimento de um terreno retangular com uma casa decimal,
 bem como o valor do metro quadrado do terreno com duas casas decimais.
 Em seguida, o programa deve mostrar o valor da área do terreno,
 bem como o valor do preço do terreno, ambos com duas casas decimais.
*/

#include <stdio.h>

int main()
{
  double width, length, squareMeterValue, area, price;

  printf("Digite a largura do terreno: ");
  scanf("%lf", &width);

  printf("Digite o comprimento do terreno: ");
  scanf("%lf", &length);

  printf("Digite o valor do metro quadrado: ");
  scanf("%lf", &squareMeterValue);

  area = width * length;
  price = squareMeterValue * area;

  printf("Área do terreno: %.2lf\n", area);
  printf("Preço do terreno: %.2lf\n", price);

  return 0;
}