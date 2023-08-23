/* Problema "soma"
 Fazer um programa para ler dois valores inteiros X e Y,
 e depois mostrar na tela o valor da soma destes números.
*/

#include <stdio.h>

int main()
{
  int x, y, summation;

  printf("Digite o valor de X: ");
  scanf("%d", &x);

  printf("Digite o valor de Y: ");
  scanf("%d", &y);

  summation = x + y;

  printf("SOMA = %d\n8", summation);

  return 0;
}