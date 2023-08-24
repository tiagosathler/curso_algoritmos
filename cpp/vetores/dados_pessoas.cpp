/* Problema "dados_pessoas"
 Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
 que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
 de homens.
*/

#include <iomanip>
#include <iostream>
#include <climits>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;

typedef struct Person
{
  char gender;
  double height;
} Person;

int main()
{
  int n, men = 0, women = 0;
  double shorterHeight, greaterHeight;
  double heightAverage = 0.0, maleHeightAverage = 0.0, femaleHeightAverage = 0.0;
  char shortestPersonGender, tallestPersonGender;

  cout << "Quantos pessoas serão digitadas (máximo de 10)? ";

  cin >> n;

  n = n < MIN_SIZE || n > MAX_SIZE ? MAX_SIZE : n;

  Person people[n];

  for (int i = 0; i < n; i++)
  {
    char gender;
    cout << "\nDados da " << i + 1 << "ª pessoa de " << n << ":\n";

    cout << "Altura (m): ";
    cin >> people[i].height;

    do
    {
      cin.ignore(INT_MAX, '\n');
      cout << "Gênero ('F/f' ou 'M/m'): ";
      cin >> gender;
      gender = toupper(gender);
    } while (gender != 'M' && gender != 'F');

    people[i].gender = gender;
  }

  for (int i = 0; i < n; i++)
  {
    heightAverage += people[i].height / n;

    if (people[i].gender == 'M')
    {
      men++;
      maleHeightAverage += people[i].height;
    }
    else
    {
      women++;
      femaleHeightAverage += people[i].height;
    }
  }

  if (men > 0)
  {
    maleHeightAverage /= men;
  }

  if (women > 0)
  {
    femaleHeightAverage /= women;
  }

  greaterHeight = people[0].height;
  tallestPersonGender = people[0].gender;

  shorterHeight = people[0].height;
  shortestPersonGender = people[0].gender;

  for (int i = 1; i < n; i++)
  {
    if (people[i].height > greaterHeight)
    {
      greaterHeight = people[i].height;
      tallestPersonGender = people[i].gender;
    }
    if (people[i].height < shorterHeight)
    {
      shorterHeight = people[i].height;
      shortestPersonGender = people[i].gender;
    }
  }

  cout << fixed << setprecision(2);
  cout << "\nAltura média geral: " << heightAverage << "m\n";

  cout << "Menor altura: " << shorterHeight << "m ('" << shortestPersonGender << "')\n";

  cout << "Maior altura: " << greaterHeight << "m ('" << tallestPersonGender << "')\n";

  if (men > 0)
  {
    double menPercentage = (double)100 * men / n;
    cout << fixed << setprecision(1);
    cout << "\nQuantidade de homens: " << men << " (" << menPercentage << " %)\n";

    cout << fixed << setprecision(2);
    cout << "Média da altura dos homens: " << maleHeightAverage << "m\n";
  }
  else
  {
    cout << "\nNÃO HÁ HOMENS!\n";
  }

  if (women > 0)
  {
    double womenPercentage = (double)100 * women / n;
    cout << fixed << setprecision(1);
    cout << "\nQuantidade de mulheres: " << women << " (" << womenPercentage << " %)\n";

    cout << fixed << setprecision(2);
    cout << "Média da altura dos mulheres: " << femaleHeightAverage << "m\n";
  }
  else
  {
    cout << "\nNÃO HÁ MULHERES!\n";
  }

  return 0;
}