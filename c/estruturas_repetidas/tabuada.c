/* Problema "tabuada"
 Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("\nDeseja a tabuada para qual valor? ");
  scanf("%d", &n);

  for (int i = 0; i <= 10; i++)
  {
    printf("%d x %d = %d\n", i, n, i * n);
  }

  return 0;
}