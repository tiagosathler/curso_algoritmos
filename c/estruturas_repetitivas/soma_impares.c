/* Problema "soma_impares"
 Leia 2 valores inteiros X e Y (em qualquer ordem).
 A seguir, calcule e mostre a soma dos números impares entre eles.
*/

#include <stdio.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int x, y, summation = 0;

  printf("Digite dois números inteiros ('x' e 'y'): \n");
  scanf("%d", &x);
  scanf("%d", &y);

  if (x > y)
  {
    swap(&x, &y);
  }

  for (int i = x + 1; i < y; i++)
  {
    if (i % 2)
    {
      summation += i;
    }
  }

  printf("\nSOMA DOS ÍMPARES = %d\n", summation);
  return 0;
}