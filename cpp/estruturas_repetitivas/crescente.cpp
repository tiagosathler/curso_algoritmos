/* Problema "crescente"
 Leia uma quantidade indeterminada de duplas de valores
 inteiros X e Y. Escreva para cada X e Y uma
 mensagem que indique se estes valores foram digitados
 em ordem crescente ou decrescente. O programa deve
 finalizar quando forem digitados dois valores iguais.
*/

#include <iostream>

using namespace std;

int main()
{
  int a, b;

  do
  {
    cout << "Digite dois números inteiros (a) e (b):\n";

    cin >> a;
    cin >> b;

    if (a > b)
    {
      cout << "DECRESCENTE!\n";
    }
    else if (a < b)
    {
      cout << "CRESCENTE!\n";
    }

  } while (a != b);

  cout << "IGUAIS!\n";

  return 0;
}