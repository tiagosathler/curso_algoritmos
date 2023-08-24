/* Problema "combustivel"
 Um posto de combustíveis deseja determinar qual de seus produtos
 tem a preferência de seus clientes.
 Escreva um algoritmo para ler o tipo de combustível abastecido
 (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
 Caso o usuário informe um código inválido (fora da faixa de 1 a
 4) deve ser solicitado um novo código (até que seja válido).
 O programa será encerrado quando o código informado for o número 4,
 devendo então mostrar a mensagem "MUITO OBRIGADO", bem
 como as quantidades de cada combustível.
*/

#include <iostream>

using namespace std;

int main()
{
  int option, alcohol = 0, gasoline = 0, diesel = 0;

  cout << "Códigos: \n";
  cout << "0 - álcool\n";
  cout << "1 - gasolina\n";
  cout << "3 - diesel\n";

  do
  {
    cout << "Informe um código (1, 2, 3) ou 4 para parar: ";
    cin >> option;

    switch (option)
    {
    case 1:
      alcohol++;
      break;
    case 2:
      gasoline++;
      break;
    case 3:
      diesel++;
      break;
    default:
      break;
    }
  } while (option != 4);

  cout << "\nMUITO OBRIGADO\n";
  cout << "  Álcool: " << alcohol << endl;
  cout << "Gasolina: " << gasoline << endl;
  cout << "  Diesel: " << diesel << endl;

  return 0;
}