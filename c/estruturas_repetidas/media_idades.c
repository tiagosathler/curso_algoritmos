/* Problema "media_idades"
 Faça um programa para ler um número indeterminado de dados,
 contendo cada um, a idade de um indivíduo.
 O último dado, que não entrará nos cálculos,
 contém um valor de idade negativa. Calcular
 e imprimir a idade média deste grupo de indivíduos.
 Se for entrado um valor negativo na primeira vez,
 mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/

#include <stdio.h>

int main()
{
  int age = 0, count = 0, summation = 0;
  double average;

  printf("Digite as idades (negativo para sair):\n");

  scanf("%d", &age);

  while (age >= 0)
  {
    count++;
    summation += age;
    scanf("%d", &age);
  }

  if (count != 0)
  {
    average = (double)summation / count;
    printf("MÉDIA = %.2lf\n", average);
  }
  else
  {
    printf("IMPOSSÍVEL CALCULAR!\n");
  }

  return 0;
}