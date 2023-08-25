package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "soma"
 * Fazer um programa para ler dois valores inteiros X e Y,
 * e depois mostrar na tela o valor da soma destes números.
 */
public class Soma {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite o valor de X: ");
    final int x = sc.nextInt();

    System.out.print("Digite o valor de Y: ");
    final int y = sc.nextInt();

    final int summation = x + y;

    System.out.printf("SOMA = %d%n", summation);
    sc.close();
  }
}