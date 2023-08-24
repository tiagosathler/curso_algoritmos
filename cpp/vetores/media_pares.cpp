/* Problema "media_pares"
 Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
 aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
 digitado, mostrar a mensagem "NENHUM NUMERO PAR"
 */

#include <iomanip>
#include <iostream>

using namespace std;
const short MIN_SIZE = 1;
const short MAX_SIZE = 10;

int main()
{
  int n, evenNumbersCount = 0;
  double averageOfEvenNumbers = 0.0;

  cout << "Quantos valores vai ter cada vetor (máximo de 10)? ";
  cin >> n;

  n = MIN_SIZE <= n && n <= MAX_SIZE ? n : MAX_SIZE;

  int vector[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um número (" << i + 1 << " de " << n << "): ";
    cin >> vector[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (vector[i] % 2 == 0)
    {
      averageOfEvenNumbers += vector[i];
      evenNumbersCount++;
    }
  }

  if (evenNumbersCount > 0)
  {
    averageOfEvenNumbers /= evenNumbersCount;
    cout << fixed << setprecision(1) << "\nMÉDIA DOS PARES = " << averageOfEvenNumbers << endl;
  }
  else
  {
    cout << "\nNENHUM NÚMERO PAR!\n";
  }
}