/* Problema "validacao_de_nota"
 Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
 (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.
*/

#include <iomanip>
#include <iostream>

using namespace std;
#define LOWER_BOUND 0
#define UPPER_BOUND 10

double readGrade()
{
  double grade;

  cin >> grade;

  while (grade < LOWER_BOUND || grade > UPPER_BOUND)
  {
    cout << "Valor inválido! Tente novamente: ";
    cin >> grade;
  }

  return grade;
}

int main()
{
  double average, summation = 0.0;

  cout << "Digite a primeira nota: ";
  summation += readGrade();

  cout << "Digite a segunda nota: ";
  summation += readGrade();

  average = summation / 2.0;
  cout << fixed << setprecision(2) << "MÉDIA = " << average << endl;

  return 0;
}