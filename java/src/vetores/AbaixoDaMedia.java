package vetores;

import java.util.Scanner;

/**
 * Problema "abaixo_da_media"
 * Fazer um programa para ler um número inteiro N e depois um vetor de N números reais.
 * Em seguida, mostrar na tela a média aritmética de todos os elementos com três casas decimais.
 * Depois mostrar todos os elementos do vetor que estejam abaixo da média,
 * com uma casa decimal cada.
 */
public class AbaixoDaMedia {
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

    double[] vector = new double[n];

    for (int i = 0; i < n; i++) {
      System.out.printf("Digite um número (%d de %d): ", i + 1, n);
      vector[i] = sc.nextDouble();
    }

    double average = 0.0;
    for (double v : vector) {
      average += v / n;
    }

    System.out.printf("%nMÉDIA DO VETOR = %.3f%n", average);
    System.out.println("ELEMENTOS ABAIXO DA MÉDIA:");

    for (double v : vector) {
      if (v < average) {
        System.out.printf("%.1f%n", v);
      }
    }

    sc.close();
  }
}