package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "soma_impares"
 * Leia 2 valores inteiros X e Y (em qualquer ordem).
 * A seguir, calcule e mostre a soma dos números impares
 * entre eles.
 */
public class SomaImpares {

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Digite dois números inteiros ('x' e 'y'): ");
    int x = sc.nextInt();
    int y = sc.nextInt();

    if (x > y) {
      int temp = x;
      x = y;
      y = temp;
    }

    int summation = 0;
    for (int i = x + 1; i < y; i++) {
      if (i % 2 == 1 || i % 2 == -1) {
        summation += i;
      }
    }

    System.out.printf("%nSOMA DOS ÍMPARES = %d%n", summation);

    sc.close();
  }
}