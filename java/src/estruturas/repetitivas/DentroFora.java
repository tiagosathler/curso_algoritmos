/*
 */

package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "dentro_fora"
 * Leia um valor inteiro N.
 * Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
 * Mostre quantos destes valores X estão dentro do intervalo [10,20]
 * e quantos estão fora do intervalo.
 */
public class DentroFora {
  private static final int LOWER_BOUND = 10;
  private static final int UPPER_BOUND = 20;
  private static final int MAX_NUMBERS = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos números você vai digitar (máximo %d)? ", MAX_NUMBERS);
    int n = sc.nextInt();

    n = n < 1 || n > MAX_NUMBERS ? 1 : n;

    int x;
    int inside = 0;
    int outside = 0;

    for (int i = 0; i < n; i++) {
      System.out.print("Digite um número: ");
      x = sc.nextInt();

      if (LOWER_BOUND <= x && x <= UPPER_BOUND) {
        inside++;
      } else {
        outside++;
      }
    }

    System.out.printf("%d DENTRO%n", inside);
    System.out.printf("%d FORA%n", outside);

    sc.close();
  }
}