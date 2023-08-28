package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "baskara"
 * Fazer um programa para ler os três coeficientes de uma equação do segundo grau.
 * Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2
 * da equação com quatro casas decimais. Se a equação não possuir raízes reais,
 * mostrar uma mensagem.
 */
public class Baskara {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Coeficiente a: ");
    final double a = sc.nextDouble();

    System.out.print("Coeficiente b: ");
    final double b = sc.nextDouble();

    System.out.print("Coeficiente c: ");
    final double c = sc.nextDouble();

    final double delta = b * b - 4 * a * c;

    if (delta >= 0 && a != 0) {
      final double x1 = (-b + Math.sqrt(delta)) / (2 * a);
      final double x2 = (-b - Math.sqrt(delta)) / (2 * a);

      System.out.printf("X1 = %.4f%n", x1);
      System.out.printf("X2 = %.4f%n", x2);
    } else {
      System.out.println("Esta equação não possui raízes reais");
    }

    sc.close();
  }
}