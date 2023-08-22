/* Problema "pagamento"
 Fazer um programa para ler o nome de um(a) funcionário(a),
 o valor que ele(a) recebe por hora, e a quantidade de horas
 trabalhadas por ele(a).
 Ao final, mostrar o valor do pagamento do funcionário com
 uma mensagem explicativa
*/

#include <stdio.h>
#include <string.h>

void read_text(char *buffer, int length)
{
  fgets(buffer, length, stdin);
  strtok(buffer, "\n");
}

void input_cleanup()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{
  char name[50];
  double value_per_hour, payment;
  int worked_hours;

  printf("Nome: ");
  read_text(name, 50);

  printf("Valor por hora: ");
  scanf("%lf", &value_per_hour);

  printf("Horas trabalhadas: ");
  scanf("%d", &worked_hours);

  payment = value_per_hour * worked_hours;

  printf("O pagamento para %s deve ser de R$ %.2lf\n", name, payment);

  return 0;
}