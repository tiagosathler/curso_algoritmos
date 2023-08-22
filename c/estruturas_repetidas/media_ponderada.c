/* Problema "media_ponderada"
 Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir.
 Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular
 e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3
 e o terceiro valor tem peso 5.
 Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso,
 dividida pela soma dos pesos.
*/

#include <stdio.h>
#define MIN_NUMBER 1
#define MAX_NUMBER 15

int main()
{
  int n;
  double a, b, c, average;
  const double weightA = 2.0, weightB = 3.0, weightC = 5.0;

  printf("Quantos números você vai digitar? ");
  scanf("%d", &n);

  if (n < MIN_NUMBER || n > MAX_NUMBER)
  {
    n = MIN_NUMBER;
  }

  for (int i = 0; i < n; i++)
  {
    printf("\nRodada %d de %d\n", i + 1, n);
    printf("Digite os três números:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    average = (a * weightA + b * weightB + c * weightC) / (weightA + weightB + weightC);

    printf("MÉDIA PONDERADA = %.1lf\n", average);
  }

  return 0;
}