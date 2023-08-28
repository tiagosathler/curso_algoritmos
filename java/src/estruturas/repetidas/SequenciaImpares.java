package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "sequencia_impares"
 * Leia um valor inteiro X.
 * Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
 */
public class SequenciaImpares {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite o valor de X (maior que 1): ");

    int x = sc.nextInt();
    x = x <= 1 ? 2 : x;

    for (int i = 1; i <= x; i++) {
      if (i % 2 == 1) {
        System.out.printf("%d%n", i);
      }
    }

    sc.close();
  }
}