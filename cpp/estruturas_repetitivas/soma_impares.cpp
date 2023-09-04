/* Problema "soma_impares"
 Leia 2 valores inteiros X e Y (em qualquer ordem).
 A seguir, calcule e mostre a soma dos números impares entre eles.
*/

#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int x, y, summation = 0;

  cout << "Digite dois números inteiros ('x' e 'y'): \n";
  cin >> x;
  cin >> y;

  if (x > y)
  {
    swap(&x, &y);
  }

  for (int i = x + 1; i < y; i++)
  {
    if (i % 2)
    {
      summation += i;
    }
  }

  cout << "\nSOMA DOS ÍMPARES = " << summation << endl;
  return 0;
}