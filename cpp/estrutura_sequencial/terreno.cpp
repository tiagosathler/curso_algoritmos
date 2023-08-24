/* Problema "terreno"
 Fazer um programa para ler as medidas da largura e
 comprimento de um terreno retangular com uma casa decimal,
 bem como o valor do metro quadrado do terreno com duas casas decimais.
 Em seguida, o programa deve mostrar o valor da área do terreno,
 bem como o valor do preço do terreno, ambos com duas casas decimais.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double width, length, squareMeterValue, area, price;

  cout << "Digite a largura do terreno: ";
  cin >> width;

  cout << "Digite o comprimento do terreno: ";
  cin >> length;

  cout << "Digite o valor do metro quadrado: ";
  cin >> squareMeterValue;

  area = width * length;
  price = squareMeterValue * area;

  cout << fixed << setprecision(2);
  cout << "Área do terreno: " << area << endl;
  cout << "Preço do terreno: " << price << endl;

  return 0;
}