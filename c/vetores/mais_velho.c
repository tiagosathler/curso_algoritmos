/* Problema "mais_velho"
 Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
 devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
 da pessoa mais velha.
*/

#define MIN_SIZE 1
#define MAX_SIZE 10

int main()
{
  int n;

  printf("Quantos pessoas você vai digitar (máximo de 10)? ");

  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  int ages[n];
  char names[n][10];

  for (int i = 0; i < n; i++)
  {
    printf("\nDados da %dª de %d:\n", i + 1, n);

    printf("Nome: ");
    scanf("%s", names[i]);

    printf("Idade: ");
    scanf("%d", &ages[i]);
  }

  int olderAgeIndex = 0;
  int olderAge = ages[olderAgeIndex];

  for (int i = 0; i < n; i++)
  {
    if (ages[i] > olderAge)
    {
      olderAge = ages[i];
      olderAgeIndex = i;
    }
  }

  printf("\nPessoa mais velha: %s\n", names[olderAgeIndex]);

  return 0;
}