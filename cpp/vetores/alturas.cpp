/* Problema "alturas"
 Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
 tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
 bem como os nomes dessas pessoas caso houver.
*/

#include <iomanip>
#include <iostream>
#include <string>
#include <climits>

using namespace std;

typedef struct Person
{
  string name;
  int age;
  double height;

} Person;

int main()
{
  const int MIN_SIZE = 1;
  const int MAX_SIZE = 10;
  const int MINOR = 16;

  int n;
  double heightAverage = 0.0, perMinors = 0.0;

  cout << "Quantos pessoas serão digitadas (máximo de 10)? ";
  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  Person people[n];

  for (int i = 0; i < n; i++)
  {
    cout << "\nDados da " << i + 1 << "ª de " << n << ":\n";

    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, people[i].name);

    cout << "Idade: ";
    cin >> people[i].age;

    cout << "Altura: ";
    cin >> people[i].height;
  }

  for (int i = 0; i < n; i++)
  {
    heightAverage += people[i].height / n;
  }

  for (int i = 0; i < n; i++)
  {
    if (people[i].age < MINOR)
    {
      perMinors += (double)100 / n;
    }
  }

  cout << fixed << setprecision(2);
  cout << "\nAltura média: " << heightAverage << "m\n";

  cout << fixed << setprecision(1);
  cout << "\nPessoas com menos de " << MINOR << " anos: " << perMinors << " %\n";

  for (int i = 0; i < n; i++)
  {
    if (people[i].age < MINOR)
    {
      cout << "- " << people[i].name << endl;
    }
  }

  return 0;
}