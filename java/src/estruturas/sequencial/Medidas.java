package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "medidas"
 * Fazer um programa para ler três medidas A, B e C.
 * Em seguida, calcular e mostrar (imprimir os dados
 * com quatro casas decimais):
 * a) a área do quadrado que tem lado A
 * b) a área do triângulo retângulo que base A e altura B
 * c) a área do trapézio que tem bases A e B, e altura C
 */
public class Medidas {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a medida A: ");
    final double a = sc.nextDouble();

    System.out.print("Digite a medida B: ");
    final double b = sc.nextDouble();

    System.out.print("Digite a medida C: ");
    final double c = sc.nextDouble();

    final double squareArea = a * a;
    final double triangleArea = a * b / 2.0;
    final double trapezeArea = ((a + b) * c) / 2.0;

    System.out.printf("ÁREA DO QUADRADO = %.4f%n", squareArea);
    System.out.printf("ÁREA DO TRIÂNGULO = %.4f%n", triangleArea);
    System.out.printf("ÁREA DO TRAPÉZIO = %.4f%n", trapezeArea);

    sc.close();
  }
}