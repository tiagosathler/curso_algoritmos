/* Problema "tempo_de_jogo"
 Leia a hora inicial e a hora final de um jogo.
 A seguir calcule a duração do jogo, sabendo que o mesmo
 pode começar em um dia e terminar em outro, tendo uma
 duração mínima de 1 hora e máxima de 24 horas.
*/

#include <iostream>

using namespace std;

int main()
{
  int start, end, duration;

  cout << "Hora inicial: ";
  cin >> start;

  cout << "Hora final: ";
  cin >> end;

  if (end > start)
  {
    duration = end - start;
  }
  else
  {
    duration = 24 - (start - end);
  }

  cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

  return 0;
}