package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "par_impar"
 * Leia um valor inteiro N.
 * Este valor será a quantidade de números inteiros que serão lidos em seguida.
 * Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
 * se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
 * apenas NULO.
 */
public class ParImpar {
  private static final int MIN_NUMBER = 1;
  private static final int MAX_NUMBER = 15;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Quantos números você vai digitar? ");

    int n = sc.nextInt();

    n = n < MIN_NUMBER || n > MAX_NUMBER ? MIN_NUMBER : n;

    int x;
    int parity;

    for (int i = 1; i <= n; i++) {
      parity = 0;

      System.out.printf("%nRodada %d de %d - Digite um número: ", i, n);
      x = sc.nextInt();

      if (x != 0) {
        final int remainder = x % 2;
        final int signal = (2 * x + 1) % 2;
        parity = remainder + signal;
      }

      switch (parity) {
        case -2 -> System.out.println("ÍMPAR NEGATIVO");
        case -1 -> System.out.println("PAR NEGATIVO");
        case 0 -> System.out.println("NULO");
        case 1 -> System.out.println("PARA POSITIVO");
        case 2 -> System.out.println("ÍMPAR POSITIVO");
        default -> System.out.println("OPS, ALGO SAIU ERRADO...");
      }
    }

    sc.close();
  }
}