/* Problema "glicose"
 Fazer um programa para ler a quantidade de glicose
 no sangue de uma pessoa e depois mostrar na tela a
 classificação desta glicose de acordo com a tabela de
 referência abaixo:

 |----------------------------------------------|
 | Classificação  | Glicose                     |
 |----------------------------------------------|
 | Normal         | Até 100 mg/dl               |
 | Elevado        | Maior que 100 até 140 mg/dl |
 | Diabetes       | Maior de 140 mg/dl          |
 |----------------------------------------------|
*/

#include <iostream>

using namespace std;

int main()
{
  const double NORMAL_LEVEL = 100.0;
  const double HIGH_LEVEL = 140.0;

  double glucoseLevel;

  string classification = "diabetes";

  cout << "Digite a medida da glicose: ";
  cin >> glucoseLevel;

  if (glucoseLevel <= NORMAL_LEVEL)
  {
    classification = "normal";
  }
  else if (glucoseLevel <= HIGH_LEVEL)
  {
    classification = "elevado";
  }

  cout << "Classificação = " << classification << endl;

  return 0;
}