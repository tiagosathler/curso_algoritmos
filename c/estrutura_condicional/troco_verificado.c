/* Problema "troco_verificado"
 Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
 O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
 e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
 ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
 valor restante conforme exemplo.
*/

#include <stdio.h>

int main()
{
  int quantity;
  double price, received, change;

  printf("Preço unitário do produto: ");
  scanf("%lf", &price);

  printf("Quantidade comprada: ");
  scanf("%d", &quantity);

  printf("Dinheiro recebido: ");
  scanf("%lf", &received);

  change = received - price * quantity;

  if (change >= 0)
  {
    printf("TROCO = R$ %.2lf\n", change);
  }
  else
  {
    printf("DINHEIRO INSUFICIENTE. FALTAM R$ %.2lf\n", -change);
  }

  return 0;
}