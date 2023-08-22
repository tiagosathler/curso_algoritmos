/* Problema "divisao"
 Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
 segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
*/

#include <stdio.h>

int main()
{
  int n, numerator, denominator;
  double division;

  printf("Quantos números você vai digitar? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("\nEntre com o numerador: ");
    scanf("%d", &numerator);

    printf("Entre com denominador: ");
    scanf("%d", &denominator);

    if (denominator != 0)
    {
      division = (double) numerator / denominator;
      printf("DIVISÃO = %.2lf\n", division);
    }
    else
    {
      printf("DIVISÃO IMPOSSÍVEL\n");
    }
  }

  return 0;
}