package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "multiplos"
 * Fazer um programa para ler dois números inteiros,
 * e dizer se um número é múltiplo do outro.
 * Os números podem ser digitados em qualquer ordem.
 */
public class Multiplos {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Digite dois números inteiros:");

    final int a = sc.nextInt();
    final int b = sc.nextInt();

    if (a != 0 && b != 0 && (a % b == 0 || b % a == 0)) {
      System.out.println("São múltiplos");
    } else {
      System.out.println("Não são múltiplos");
    }

    sc.close();
  }
}