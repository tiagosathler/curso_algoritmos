package vetores;

import java.util.Scanner;

/**
 * Problema "media_pares"
 * Fazer um programa para ler um vetor de N números inteiros.
 * Em seguida, mostrar na tela a média aritmética somente dos números pares lidos,
 * com uma casa decimal.
 * Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR"
 */
public class MediaPares {
  private static final int MIN_SIZE = 1;
  private static final int MAX_SIZE = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos valores vai ter cada vetor (máximo de %d)? ", MAX_SIZE);
    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    int[] vector = new int[n];

    for (int i = 0; i < n; i++) {
      System.out.printf("Digite um número (%d de %d): ", i + 1, n);
      vector[i] = sc.nextInt();
    }

    double averageOfEvenNumbers = 0;
    int evenNumbersCount = 0;

    for (int v : vector) {
      if (v % 2 == 0) {
        averageOfEvenNumbers += v;
        evenNumbersCount++;
      }
    }

    if (evenNumbersCount > 0) {
      averageOfEvenNumbers /= evenNumbersCount;
      System.out.printf("%nMÉDIA DOS PARES = %.1f%n", averageOfEvenNumbers);
    } else {
      System.out.println("NENHUM NÚMERO PAR!");
    }
    sc.close();
  }
}