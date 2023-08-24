/* Problema "temperatura"
 Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa.
 Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
 informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas
 decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve deduzir a fórmula
 de Celsius para Fahrenheit):

 C = (F - 32) * 5 / 9
 F = C * 9 / 5 + 32
*/

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  double suppliedTemp, convertedTemp;
  char scale;
  string convertedScale;

  cout << "Você vai digitar a temperatura em qual escala (C/F)? ";

  cin >> scale;
  scale = toupper(scale);

  switch (scale)
  {
  case 'F':
  {
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> suppliedTemp;

    convertedTemp = (suppliedTemp - 32) * 5 / 9;
    convertedScale = "Celsius";
    break;
  }
  case 'C':
  {
    cout << "Digite a temperatura em Celsius: ";
    cin >> suppliedTemp;

    convertedTemp = suppliedTemp * 9 / 5 + 32;
    convertedScale = "Fahrenheit";
    break;
  }

  default:
    cout << "OPÇÃO INVÁLIDA!\n";
    return 1;
  }

  cout << fixed << setprecision(2);
  cout << "Temperatura convertida: " << convertedTemp << "º " << convertedScale << endl;

  return 0;
}