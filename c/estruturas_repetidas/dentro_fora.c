/* Problema "dentro_fora"
 Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
 Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
 conforme exemplo
*/

#include <stdio.h>

int main()
{
  int n, x, inside = 0, outside = 0;
  const int LOWER_BOUND = 10;
  const int UPPER_BOUND = 20;

  printf("Quantos números você vai digitar? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &x);

    if (LOWER_BOUND <= x && x <= UPPER_BOUND)
    {
      inside++;
    }
    else
    {
      outside++;
    }
  }

  printf("%d DENTRO\n", inside);
  printf("%d FORA\n", outside);

  return 0;
}