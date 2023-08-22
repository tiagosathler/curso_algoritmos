/* Problema "fatorial"
 Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
 fatorial de N.
*/

#include <stdio.h>
#define MIN_NUMBER 1
#define MAX_NUMBER 15

int main()
{
  int n, factorial = 1;

  printf("Digite o valor de N: ");
  scanf("%d", &n);

  if (n < MIN_NUMBER || n > MAX_NUMBER)
  {
    n = MAX_NUMBER;
  }

  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  printf("FATORIAL DE %d = %d\n", n, factorial);

  return 0;
}