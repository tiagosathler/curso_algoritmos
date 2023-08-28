package estruturas.repetidas;

import java.util.Scanner;


/**
 * Problema "senha_fixa"
 * Escreva um programa que repita a leitura de uma senha
 * até que ela seja válida. Para cada leitura de senha incorreta
 * informada, escrever a mensagem "Senha Invalida! Tente novamente:".
 * Quando a senha for informada corretamente deve ser impressa a mensagem
 * "Acesso Permitido" e o algoritmo encerrado.
 * Considere que a senha correta é o valor 2002.
 */
public class SenhaFixa {
  private static final int PASSWORD = 2002;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a senha: ");

    int password = sc.nextInt();

    while (password != PASSWORD) {
      System.out.print("Senha inválida! Digite novamente: ");
      password = sc.nextInt();
    }

    System.out.println("Acesso permitido!");

    sc.close();
  }
}