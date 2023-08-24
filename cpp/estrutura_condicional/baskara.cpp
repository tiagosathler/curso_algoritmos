/* Problema "baskara"
 Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
 de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
 conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double a, b, c, delta, x1, x2;

  cout << "Coeficiente a: ";
  cin >> a;

  cout << "Coeficiente b: ";
  cin >> b;

  cout << "Coeficiente c: ";
  cin >> c;

  delta = b * b - 4 * a * c;

  if (delta >= 0 && a != 0)
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(4);
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
  }
  else
  {
    cout << "Esta equação não possui raízes reais\n";
  }

  return 0;
}