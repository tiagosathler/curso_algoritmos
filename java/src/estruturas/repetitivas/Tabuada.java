package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "tabuada"
 * Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
 */
public class Tabuada {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Deseja a tabuada para qual valor? ");

    final int n = sc.nextInt();

    for (int i = 0; i <= 10; i++) {
      System.out.printf("%d x %d = %d%n", i, n, i * n);
    }

    sc.close();
  }
}