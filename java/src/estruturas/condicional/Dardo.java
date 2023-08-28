package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "dardo"
 * No arremesso de dardo, o atleta tem três chances para lançar o dardo
 * à maior distância que conseguir. Você deve criar um programa para,
 * dadas as medidas das três tentativas de lançamento, informar qual
 * foi a maior.
 */
public class Dardo {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Digite as três distâncias:");

    final double a = sc.nextDouble();
    final double b = sc.nextDouble();
    final double c = sc.nextDouble();

    double greatest = c;
    if (a >= b && a >= c) {
      greatest = a;
    } else if (b >= c) {
      greatest = b;
    }

    System.out.printf("MAIOR DISTÂNCIA = %.2f%n", greatest);

    sc.close();
  }
}