package vetores;

import java.util.Scanner;

/**
 * Problema "soma_vetor"
 * Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
 * - Imprimir todos os elementos do vetor
 * - Mostrar na tela a soma e a média dos elementos do vetor
 */
public class SomaVetor {
  private static final int MIN_SIZE = 1;
  private static final int MAX_SIZE = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos números você vai digitar (máximo de %d)? ", MAX_SIZE);
    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    double[] vector = new double[n];

    for (int i = 0; i < vector.length; i++) {
      System.out.printf("Digite um número (%d de %d): ", i + 1, n);
      vector[i] = sc.nextDouble();
    }

    double summation = 0.0;
    for (double v : vector) {
      summation += v;
    }

    final double average = summation / n;

    System.out.print("VALORES = ");

    for (double v : vector) {
      System.out.printf("%.1f ", v);
    }

    System.out.printf("%nSOMA = %.2f", summation);
    System.out.printf("%nMÉDIA = %.2f%n", average);

    sc.close();
  }
}