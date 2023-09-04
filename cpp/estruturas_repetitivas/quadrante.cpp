/* Problema "quadrante"
 Escreva um programa para ler as coordenadas (X,Y)
 de uma quantidade indeterminada de pontos no
 sistema cartesiano. Para cada ponto escrever
 o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
 O algoritmo será encerrado quando pelo menos
 uma de duas coordenadas for NULA (nesta situação sem
 escrever mensagem alguma).

       y
   Q2  |  Q1
   --------- x
   Q3  |  Q4
*/

#include <iostream>

using namespace std;

int main()
{
  int x, y;

  do
  {
    cout << "\nDigite os valores das coordenadas X e Y:\n";

    cin >> x;
    cin >> y;

    if (x > 0 && y > 0)
    {
      cout << "QUADRANTE Q1\n";
    }
    else if (x < 0 && y > 0)
    {
      cout << "QUADRANTE Q2\n";
    }
    else if (x < 0 && y < 0)
    {
      cout << "QUADRANTE Q3\n";
    }
    else if (x > 0 && y < 0)
    {
      cout << "QUADRANTE Q4\n";
    }

  } while (x != 0 && y != 0);

  return 0;
}