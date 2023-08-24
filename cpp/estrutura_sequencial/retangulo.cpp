/* Problema "retangulo"
 Fazer um programa para ler as medidas da base e altura de um retângulo.
 Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais,
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double base, height, area, perimeter, diagonal;

  cout << "Base do triângulo: ";
  cin >> base;

  cout << "Altura do triângulo: ";
  cin >> height;

  area = height * base;
  perimeter = 2 * (base + height);
  diagonal = sqrt(base * base + height * height);

  cout << fixed << setprecision(4);
  cout << "ÁREA = " << area << endl;
  cout << "PERÍMETRO = " << perimeter << endl;
  cout << "DIAGONAL = " << diagonal << endl;

  return 0;
}