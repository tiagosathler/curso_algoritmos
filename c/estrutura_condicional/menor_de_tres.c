/* Problema "menor_de_tres"
 Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
 números lidos. Em caso de empate, mostrar apenas uma vez.
*/

#include <stdio.h>

int main()
{
  int a, b, c, smallest;

  printf("Primeiro valor (a): ");
  scanf("%d", &a);

  printf("Segundo valor (b): ");
  scanf("%d", &b);

  printf("Terceiro valor (c): ");
  scanf("%d", &c);

  if (a <= b && a <= c)
  {
    smallest = a;
  }
  else if (b <= c)
  {
    smallest = b;
  }
  else
  {
    smallest = c;
  }

  printf("MENOR = %d\n", smallest);

  return 0;
}