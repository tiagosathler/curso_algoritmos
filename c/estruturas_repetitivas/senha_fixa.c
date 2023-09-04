/* Problema "senha_fixa"
 Escreva um programa que repita a leitura de uma senha
 até que ela seja válida. Para cada leitura de senha incorreta
 informada, escrever a mensagem "Senha Invalida! Tente novamente:".
 Quando a senha for informada corretamente deve ser impressa a mensagem
 "Acesso Permitido" e o algoritmo encerrado.
 Considere que a senha correta é o valor 2002.
*/

#include <stdio.h>
#define PASSWORD 2002

int main()
{
  int password;

  printf("Digite a senha: ");
  scanf("%d", &password);

  while (password != PASSWORD)
  {
    printf("Senha inválida! Digite novamente: ");
    scanf("%d", &password);
  }

  printf("Acesso permitido!\n");
  return 0;
}