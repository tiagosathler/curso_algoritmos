/* Problema "soma_vetores"
 Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
 terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
 o vetor C gerado.
*/

#include <iostream>

const int MIN_SIZE = 1;
const int MAX_SIZE = 10;

using namespace std;

void readVector(int vector[], int size, char vectorName)
{
  cout << "\nDigite os valores do vetor " << vectorName << ":\n";
  for (int i = 0; i < size; i++)
  {
    cin >> vector[i];
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
  cout << "\nVETOR RESULTANTE:\n";
  for (int i = 0; i < size; i++)
  {
    cout << vector[i] << endl;
  }
}

int main()
{

  int n;

  cout << "Quantos valores vai ter cada vetor (máximo de 10)? ";
  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  int vectorA[n], vectorB[n], vectorC[n];

  readVector(vectorA, n, 'A');
  readVector(vectorB, n, 'B');

  sumVectors(vectorA, vectorB, vectorC, n);

  printResult(vectorC, n);

  return 0;
}
