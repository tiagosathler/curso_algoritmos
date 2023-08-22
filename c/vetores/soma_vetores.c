/* Problema "soma_vetores"
 Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
 terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
 o vetor C gerado.
*/

#include <stdio.h>
#define MIN_SIZE 1
#define MAX_SIZE 10

void readVector(int vector[], int size, char vectorName)
{
  printf("\nDigite os valores do vetor %c:\n", vectorName);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &vector[i]);
  }
}

void sumVectors(const int vectorA[], const int vectorB[], int resultVector[], int size)
{
  for (int i = 0; i < size; i++)
  {
    resultVector[i] = vectorA[i] + vectorB[i];
  }
}

void printResult(const int vector[], int size)
{
  printf("\nVETOR RESULTANTE:\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", vector[i]);
  }
}

int main()
{
  int n;

  printf("Quantos valores vai ter cada vetor (máximo de 10)? ");
  scanf("%d", &n);

  if (n < MIN_SIZE || n > MAX_SIZE)
  {
    n = MAX_SIZE;
  }

  int vectorA[n], vectorB[n], vectorC[n];

  readVector(vectorA, n, 'A');
  readVector(vectorB, n, 'B');

  sumVectors(vectorA, vectorB, vectorC, n);

  printResult(vectorC, n);

  return 0;
}
