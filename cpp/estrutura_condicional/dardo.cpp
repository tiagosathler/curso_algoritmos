/* Problema "dardo"
 No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
 Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
 foi a maior.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  double a, b, c, greatest;

  cout << "Digite as três distâncias:\n";

  cin >> a;
  cin >> b;
  cin >> c;

  if (a >= b && a >= c)
  {
    greatest = a;
  }
  else if (b >= c)
  {
    greatest = b;
  }
  else
  {
    greatest = c;
  }

  cout << fixed << setprecision(2) << "MAIOR DISTÂNCIA = " << greatest << endl;

  return 0;
}