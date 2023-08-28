package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "media_ponderada"
 * Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir.
 * Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular
 * e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3
 * e o terceiro valor tem peso 5.
 * Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso,
 * dividida pela soma dos pesos.
 */
public class MediaPonderada {
  private static final int MIN_NUMBER = 1;
  private static final int MAX_NUMBER = 15;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Quantos números você vai digitar? ");
    int n = sc.nextInt();

    n = n < MIN_NUMBER || n > MAX_NUMBER ? MIN_NUMBER : n;

    final double weightA = 2.0;
    final double weightB = 3.0;
    final double weightC = 5.0;

    for (int i = 0; i < n; i++) {
      System.out.printf("%nRodada %d de %d%n", i + 1, n);
      System.out.println("Digite os três números:");

      final double a = sc.nextDouble();
      final double b = sc.nextDouble();
      final double c = sc.nextDouble();

      final double average = (a * weightA + b * weightB + c * weightC) / (weightA + weightB + weightC);

      System.out.printf("MÉDIA PONDERADA = %.1f%n", average);
    }

    sc.close();
  }
}