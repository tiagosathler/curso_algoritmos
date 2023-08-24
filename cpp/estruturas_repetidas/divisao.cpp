/* Problema "divisao"
 Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
 segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int n, numerator, denominator;
  double division;

  cout << "Quantos números você vai digitar? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "\nEntre com o numerador: ";
    cin >> numerator;

    cout << "Entre com denominador: ";
    cin >> denominator;

    if (denominator != 0)
    {
      division = (double)numerator / denominator;
      cout << fixed << setprecision(2) << "DIVISÃO = " << division << endl;
    }
    else
    {
      cout << "DIVISÃO IMPOSSÍVEL\n";
    }
  }

  return 0;
}