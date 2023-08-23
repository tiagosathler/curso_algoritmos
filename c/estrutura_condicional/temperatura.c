/* Problema "temperatura"
 Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa.
 Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
 informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas
 decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve deduzir a fórmula
 de Celsius para Fahrenheit):

 C = (F - 32) * 5 / 9
 F = C * 9 / 5 + 32
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  double suppliedTemp, convertedTemp;
  char scale, convertedScale[15];

  printf("Você vai digitar a temperatura em qual escala (C/F)? ");

  scanf("%c", &scale);
  scale = toupper(scale);

  switch (scale)
  {
  case 'F':
  {
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &suppliedTemp);

    convertedTemp = (suppliedTemp - 32) * 5 / 9;
    strcpy(convertedScale, "Celsius");
    break;
  }
  case 'C':
  {
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &suppliedTemp);

    convertedTemp = suppliedTemp * 9 / 5 + 32;
    strcpy(convertedScale, "Fahrenheit");
    break;
  }

  default:
    printf("OPÇÃO INVÁLIDA!\n");
    return 1;
  }

  printf("Temperatura convertida: %.2lfº %s\n", convertedTemp, convertedScale);

  return 0;
}