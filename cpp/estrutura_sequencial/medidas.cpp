/* Problema "medidas"
 Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
 a) a área do quadrado que tem lado A
 b) a área do triângulo retângulo que base A e altura B
 c) a área do trapézio que tem bases A e B, e altura C
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, c, square_area, triangle_area, trapeze_area;

  cout << "Digite a medida A: ";
  cin >> a;

  cout << "Digite a medida B: ";
  cin >> b;

  cout << "Digite a medida C: ";
  cin >> c;

  square_area = a * a;
  triangle_area = a * b / 2.0;
  trapeze_area = ((a + b) * c) / 2.0;

  cout << fixed << setprecision(4);
  cout << "ÁREA DO QUADRADO = " << square_area << endl;
  cout << "ÁREA DO TRIÂNGULO = " << triangle_area << endl;
  cout << "ÁREA DO TRAPÉZIO = " << trapeze_area << endl;

  return 0;
}