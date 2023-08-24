/* Problema "notas"
 Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
 uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
 ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
 mensagem "REPROVADO", conforme exemplos.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double a, b, finalGrade;

  cout << "Digite a primeira nota: ";
  cin >> a;

  cout << "Digite a segunda nota: ";
  cin >> b;

  finalGrade = a + b;

  cout << fixed << setprecision(2) << "NOTAL FINAL = " << finalGrade << endl;

  if (finalGrade >= 60)
  {
    cout << "APROVADO!\n";
  }
  else
  {
    cout << "REPROVADO!\n";
  }

  return 0;
}
