package vetores;

import java.util.Scanner;

/**
 * Problema "numeros_pares"
 * Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
 * tela todos os números pares, e também a quantidade de números pares.
 */
public class NumerosPares {
  private static final int MIN_SIZE = 1;
  private static final int MAX_SIZE = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos números voce vai digitar (máximo de %d)? ", MAX_SIZE);
    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    int[] vector = new int[n];

    for (int i = 0; i < vector.length; i++) {
      System.out.printf("Digite um número (%d de %d): ", i + 1, n);
      vector[i] = sc.nextInt();
    }

    System.out.println("NÚMEROS PARES:");

    int quantity = 0;

    for (int v : vector) {
      if (v % 2 == 0) {
        System.out.printf("%d ", v);
        quantity++;
      }
    }

    System.out.printf("%n%nQUANTIDADE DE PARES = %d%n", quantity);
    sc.close();
  }
}