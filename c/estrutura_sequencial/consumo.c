/* Problema "consumo"
 Fazer um programa para ler a distância total (em km)
 percorrida por um carro, bem como o total de  combustível
 gasto por este carro ao percorrer tal distância.
 Seu programa deve mostrar o consumo médio do carro, com três casas decimais.
*/

#include <stdio.h>

int main()
{
  double spent_fuel, average_fuel;
  int distance;

  printf("Distância percorrida: ");
  scanf("%d", &distance);

  printf("Combustível gasto: ");
  scanf("%lf", &spent_fuel);

  average_fuel = distance / spent_fuel;
  printf("\nConsumo médio = %.3lf\n", average_fuel);

  return 0;
}