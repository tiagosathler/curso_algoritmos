/* Problema "duracao"
 Fazer um programa para ler uma duração de tempo em segundos,
 daí imprimir na tela esta duração no formato: horas:minutos:segundos.
*/

#include <iostream>

using namespace std;

int main()
{
  int duration, hours, minutes, seconds;

  cout << "Digite a duração em segundos: ";
  cin >> duration;

  hours = duration / 3600;
  minutes = duration % 3600 / 60;
  seconds = (duration % 3600) % 60;

  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}