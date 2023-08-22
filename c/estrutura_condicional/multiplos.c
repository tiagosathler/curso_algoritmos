/* Problema "multiplos"
 Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
 números podem ser digitados em qualquer ordem.
*/

#include <stdio.h>

int main()
{
  int a, b;

  printf("Digite dois números inteiros:\n");

  scanf("%d", &a);
  scanf("%d", &b);

  if (a != 0 && b != 0 && (a % b == 0 || b % a == 0))
  {
    printf("São múltiplos\n");
  }
  else
  {
    printf("Não são múltiplos\n");
  }

  return 0;
}