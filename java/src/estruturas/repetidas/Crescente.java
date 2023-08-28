package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "crescente"
 * Leia uma quantidade indeterminada de duplas de valores
 * inteiros X e Y. Escreva para cada X e Y uma
 * mensagem que indique se estes valores foram digitados
 * em ordem crescente ou decrescente. O programa deve
 * finalizar quando forem digitados dois valores iguais.
 */
public class Crescente {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int a;
    int b;

    do {
      System.out.println("Digite dois números inteiros (a) e (b):");

      a = sc.nextInt();
      b = sc.nextInt();

      if (a > b) {
        System.out.println("DECRESCENTE!");
      } else if (a < b) {
        System.out.println("CRESCENTE!");
      }

    } while (a != b);

    System.out.println("IGUAIS!");

    sc.close();
  }
}