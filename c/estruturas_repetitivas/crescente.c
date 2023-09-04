/* Problema "crescente"
 Leia uma quantidade indeterminada de duplas de valores
 inteiros X e Y. Escreva para cada X e Y uma
 mensagem que indique se estes valores foram digitados
 em ordem crescente ou decrescente. O programa deve
 finalizar quando forem digitados dois valores iguais.
*/

#include <stdio.h>

int main()
{
  int a, b;

  do
  {
    printf("Digite dois números inteiros (a) e (b):\n");

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
      printf("DECRESCENTE!\n");
    }
    else if (a < b)
    {
      printf("CRESCENTE!\n");
    }

  } while (a != b);

  printf("IGUAIS!\n");

  return 0;
}