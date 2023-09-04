package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "fatorial"
 * Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
 * fatorial de N.
 */
public class Fatorial {
  private static final int MIN_NUMBER = 0;
  private static final int MAX_NUMBER = 15;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite o valor de N: ");
    int n = sc.nextInt();

    n = n < MIN_NUMBER || n > MAX_NUMBER ? MIN_NUMBER : n;

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
      factorial *= i;
    }

    System.out.printf("FATORIAL DE %d = %d%n", n, factorial);
    sc.close();
  }
}