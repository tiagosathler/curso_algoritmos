/* Problema "combustivel"
 Um posto de combustíveis deseja determinar qual de seus produtos
 tem a preferência de seus clientes.
 Escreva um algoritmo para ler o tipo de combustível abastecido
 (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
 Caso o usuário informe um código inválido (fora da faixa de 1 a
 4) deve ser solicitado um novo código (até que seja válido).
 O programa será encerrado quando o código informado for o número 4,
 devendo então mostrar a mensagem "MUITO OBRIGADO", bem
 como as quantidades de cada combustível.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
  int option, alcohol = 0, gasoline = 0, diesel = 0;

  printf("Códigos: \n");
  printf("0 - álcool\n");
  printf("1 - gasolina\n");
  printf("3 - diesel\n");

  do
  {
    printf("Informe um código (1, 2, 3) ou 4 para parar: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
      alcohol++;
      break;
    case 2:
      gasoline++;
      break;
    case 3:
      diesel++;
      break;
    default:
      break;
    }
  } while (option != 4);

  printf("\nMUITO OBRIGADO\n");
  printf("  Álcool: %d\n", alcohol);
  printf("Gasolina: %d\n", gasoline);
  printf("  Diesel: %d\n", diesel);

  return 0;
}