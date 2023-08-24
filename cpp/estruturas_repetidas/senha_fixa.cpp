/* Problema "senha_fixa"
 Escreva um programa que repita a leitura de uma senha
 até que ela seja válida. Para cada leitura de senha incorreta
 informada, escrever a mensagem "Senha Invalida! Tente novamente:".
 Quando a senha for informada corretamente deve ser impressa a mensagem
 "Acesso Permitido" e o algoritmo encerrado.
 Considere que a senha correta é o valor 2002.
*/

#include <iostream>

#define PASSWORD 2002

using namespace std;

int main()
{
  int password;

  cout << "Digite a senha: ";
  cin >> password;

  while (password != PASSWORD)
  {
    cout << "Senha inválida! Digite novamente: ";
    cin >> password;
  }

  cout << "Acesso permitido!\n";
  return 0;
}