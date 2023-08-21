#include <stdio.h>
/* Problema "circulo"
 Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
 círculo com três casas decimais. A fórmula da área do círculo é a seguinte: area = 𝜋. 𝑟 . Você pode
 usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
 diretamente o valor 3.14159.
*/

int main()
{
  double raio, area;
  const double PI = 3.141592653589793;

  printf("Digite o valor do raio do circulo: ");
  scanf("%lf", &raio);

  area = PI * raio * raio;

  printf("AREA = %.3lf\n", area);
  return 0;
}