/* Problema "idades"
 Fazer um programa para ler o nome e idade de duas pessoas.
 Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas,  com uma casa decimal
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
  char name1[50], name2[50];
  int age1, age2;
  double average_age;

  printf("Dados da primeira pessoa:\n");

  printf("Nome: ");
  read_text(name1, 50);

  printf("Idade: ");
  scanf("%d", &age1);

  printf("Dados da segunda pessoa:\n");

  printf("Nome: ");
  input_cleanup();
  read_text(name2, 50);

  printf("Idade: ");
  scanf("%d", &age2);

  average_age = (age1 + age2) / 2.0;

  printf("A idade média de %s e %s é de %.1lf anos.\n", name1, name2, average_age);

  return 0;
}