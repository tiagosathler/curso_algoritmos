/* Problema "aprovados"
 Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
 no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
 os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
 igual a 6.0 (seis).
*/

#include <iomanip>
#include <iostream>
#include <string>
#include <climits>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;
const short LENGTH_OF_NAME = 30;
const short NUM_OF_GRADES = 2;
const short PASS_GRADE = 6;

typedef struct Student
{
  string name;
  double grades[NUM_OF_GRADES];
  double average;
} Student;

int main()
{
  int n, approvedStudents = 0;

  cout << "Quantos pessoas você vai digitar (máximo de 10)? ";

  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  Student students[n];

  for (int i = 0; i < n; i++)
  {
    cout << "\nDados da " << i + 1 << "ª pessoa de " << n << ":\n";

    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, students[i].name);

    for (int j = 0; j < NUM_OF_GRADES; j++)
    {
      cout << j + 1 << "ª nota: ";
      cin >> students[i].grades[j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    students[i].average = 0.0;
    for (int j = 0; j < NUM_OF_GRADES; j++)
    {
      students[i].average += students[i].grades[j] / NUM_OF_GRADES;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (students[i].average >= PASS_GRADE)
    {
      approvedStudents++;
    }
  }

  if (approvedStudents > 0)
  {
    cout << "\nALUNOS APROVADOS:\n";

    for (int i = 0; i < n; i++)
    {
      if (students[i].average >= PASS_GRADE)
      {
        cout << " - " << students[i].name << endl;
      }
    }
  }
  else
  {
    cout << "\nNENHUM ALUNO FOI APROVADO!\n";
  }

  return 0;
}
