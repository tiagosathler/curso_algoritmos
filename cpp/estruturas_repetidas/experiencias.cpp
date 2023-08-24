/* Problema "experiencias"
 Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
 organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
 quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
 laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
 informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
 utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
 valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
 inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
 de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
 cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
 percentual deve ser apresentado com dois dígitos após o ponto.
*/

#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

typedef struct
{
  int mice;
  int frogs;
  int rabbits;
} Animals;

bool inputAnimals(char choice, Animals *animals)
{
  int quantity, *animalPointer;
  string animalKind;

  switch (choice)
  {
  case 'R':
    animalPointer = &animals->mice;
    animalKind = "ratos";
    break;
  case 'S':
    animalPointer = &animals->frogs;
    animalKind = "sapos";
    break;
  case 'C':
    animalPointer = &animals->rabbits;
    animalKind = "coelhos";
    break;
  default:
    cout << "Opção inválida! Tente novamente.\n";
    return false;
  }

  cout << "Digite a quantidade de " << animalKind << ": ";
  cin >> quantity;

  if (quantity <= 0)
  {
    cout << "Quantidade inválida! Tente novamente.\n";
    return false;
  }

  *animalPointer += quantity;

  return true;
}

int main()
{
  const int MIN_CASES = 1;
  const int MAX_CASES = 15;

  Animals animals = {0, 0, 0};

  int n, total;
  double perMice, perFrogs, perRabbits;
  char choice;

  cout << "Quantos casos de teste serão digitados? ";
  cin >> n;

  if (n < MIN_CASES || n > MAX_CASES)
  {
    n = MIN_CASES;
  }

  for (int i = 1; i <= n; i++)
  {
    do
    {
      cout << "\nEntrada número " << i << " de " << n << endl;

      cout << "Tipo de cobaia: (R)ato, (S)apo, (C)oelho: ";

      cin.ignore(INT_MAX, '\n');
      cin >> choice;

      choice = toupper(choice);
    } while (!inputAnimals(choice, &animals));
  }

  total = animals.mice + animals.frogs + animals.rabbits;

  perMice = (double)100 * animals.mice / total;
  perFrogs = (double)100 * animals.frogs / total;
  perRabbits = (double)100 * animals.rabbits / total;

  cout << fixed << setprecision(2);
  cout << "\nRELATÓRIO FINAL:\n";
  cout << "Total: " << total << " cobaias\n\n";
  cout << "Total de coelhos: " << animals.rabbits << " (" << perRabbits << " %)\n";
  cout << "Total de ratos: " << animals.mice << " (" << perMice << " %)\n";
  cout << "Total de sapos: " << animals.frogs << " (" << perFrogs << " %)\n";

  return 0;
}