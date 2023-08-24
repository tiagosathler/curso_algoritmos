/* Problema "mais_velho"
 Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
 devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
 da pessoa mais velha.
*/

#include <iostream>
#include <string>
#include <climits>

using namespace std;

const int MIN_SIZE = 1;
const int MAX_SIZE = 10;

typedef struct Person
{
  string name;
  int age;
} Person;


int main()
{
  int n;

  cout << "Quantos pessoas você vai digitar (máximo de 10)? ";

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
  }

  int olderAgeIndex = 0;
  int olderAge = people[olderAgeIndex].age;

  for (int i = 0; i < n; i++)
  {
    if (people[i].age > olderAge)
    {
      olderAge = people[i].age;
      olderAgeIndex = i;
    }
  }

  cout << "\nPessoa mais velha: " << people[olderAgeIndex].name << endl;

  return 0;
}