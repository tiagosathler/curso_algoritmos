package vetores;

import java.util.Scanner;

/**
 * Problema "maior_posicao"
 * Faça um programa que leia N números reais positivos e armazene-os em um vetor.
 * Em seguida, mostrar na tela o maior número do vetor (supor não haver empates).
 * Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero).
 */
public class MaiorPosicao {
  private static final int MIN_SIZE = 1;
  private static final int MAX_SIZE = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Quantos números voce vai digitar (máximo de 10)? ");
    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    double[] vector = new double[n];

    for (int i = 0; i < vector.length; i++) {
      System.out.printf("Digite um número (%d de %d): ", i + 1, n);
      vector[i] = sc.nextDouble();
    }

    int position = 0;
    double biggestNumber = vector[position];

    for (int i = 0; i < vector.length; i++) {
      if (vector[i] > biggestNumber) {
        biggestNumber = vector[i];
        position = i;
      }
    }

    System.out.printf("%nMAIOR VALOR = %.1f", biggestNumber);
    System.out.printf("%nPOSIÇÃO DO MAIOR VALOR = %d%n", position);

    sc.close();
  }
}