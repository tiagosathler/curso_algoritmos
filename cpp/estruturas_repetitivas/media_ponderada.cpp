/* Problema "media_ponderada"
 Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir.
 Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular
 e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3
 e o terceiro valor tem peso 5.
 Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso,
 dividida pela soma dos pesos.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  const int MIN_NUMBER = 1;
  const int MAX_NUMBER = 15;

  int n;
  double a, b, c, average;
  const double weightA = 2.0, weightB = 3.0, weightC = 5.0;

  cout << "Quantos números você vai digitar? ";
  cin >> n;

  if (n < MIN_NUMBER || n > MAX_NUMBER)
  {
    n = MIN_NUMBER;
  }

  for (int i = 1; i <= n; i++)
  {
    cout << "\nRodada " << i << " de " << n << endl;
    cout << "Digite os três números:\n";

    cin >> a;
    cin >> b;
    cin >> c;

    average = (a * weightA + b * weightB + c * weightC) / (weightA + weightB + weightC);

    cout << fixed << setprecision(1) << "MÉDIA PONDERADA = " << average << endl;
  }

  return 0;
}