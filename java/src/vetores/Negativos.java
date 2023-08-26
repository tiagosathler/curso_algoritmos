package vetores;

import java.util.Scanner;

/**
 * Problema "negativos"
 * Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
 * e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
 */
public class Negativos {
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

    int[] vector = new int[n];

    for (int i = 0; i < vector.length; i++) {
      System.out.printf("Digite um número (%d de %d): ", i + 1, n);
      vector[i] = sc.nextInt();
    }

    System.out.println("NÚMEROS NEGATIVOS:");

    for (int j : vector) {
      if (j < 0) {
        System.out.printf("%d%n", j);
      }
    }

    sc.close();
  }
}