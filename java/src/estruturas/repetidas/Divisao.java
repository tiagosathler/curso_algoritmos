package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "divisao"
 * Escreva um algoritmo que leia dois números
 * e imprima o resultado da divisão do primeiro pelo
 * segundo.
 * Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”
 */
public class Divisao {
  private static final int MAX_NUMBERS = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos números você vai digitar (máximo de %d? ", MAX_NUMBERS);
    int n = sc.nextInt();

    n = n < 1 || n > MAX_NUMBERS ? 1 : n;

    for (int i = 0; i < n; i++) {
      System.out.printf("%nEntre com o numerador: ");
      final int numerator = sc.nextInt();

      System.out.print("Entre com denominador: ");
      final int denominator = sc.nextInt();

      if (denominator != 0) {
        final double division = (double) numerator / denominator;
        System.out.printf("DIVISÃO = %.2f%n", division);
      } else {
        System.out.println("DIVISÃO IMPOSSÍVEL");
      }
    }

    sc.close();
  }
}