/* Problema "par_impar"
 Leia um valor inteiro N.
 Este valor será a quantidade de números inteiros que serão lidos em seguida.
 Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
 se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
 apenas NULO.
*/

#include <stdio.h>
#define MIN_NUMBER 1
#define MAX_NUMBER 15

int main()
{
  int n, x, remainder, signal, parity;

  printf("Quantos números você vai digitar? ");
  scanf("%d", &n);

  if (n < MIN_NUMBER || n > MAX_NUMBER)
  {
    n = MIN_NUMBER;
  }

  for (int i = 1; i <= n; i++)
  {
    parity = 0;
    printf("\nRodada %d de %d - Digite um número: ", i, n);
    scanf("%i", &x);

    if (x != 0)
    {
      remainder = x % 2;
      signal = (2 * x + 1) % 2;
      parity = remainder + signal;
    }

    switch (parity)
    {
    case -2:
      printf("ÍMPAR NEGATIVO\n");
      break;
    case -1:
      printf("PAR NEGATIVO\n");
      break;
    case 0:
      printf("NULO\n");
      break;
    case 1:
      printf("PARA POSITIVO\n");
      break;
    case 2:
      printf("ÍMPAR POSITIVO\n");
      break;
    default:
      printf("OPS, ALGO SAIU ERRADO...\n");
      break;
    }
  }

  return 0;
}