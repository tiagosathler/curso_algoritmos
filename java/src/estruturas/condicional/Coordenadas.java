package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "coordenadas"
 * Leia os valores das coordenadas X e Y de um ponto no plano
 * cartesiano. A seguir, determine qual o quadrante ao qual pertence o
 * ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
 * mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
 * “Eixo X” ou “Eixo Y”, conforme for a situação.
 * y
 * Q2  |  Q1
 * --------- x
 * Q3  |  Q4
 */
public class Coordenadas {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Valor de X: ");
    final double x = sc.nextDouble();

    System.out.print("Valor de Y: ");
    final double y = sc.nextDouble();

    String quadrant = "Origem";
    if (x > 0 && y > 0) {
      quadrant = "Q1";
    } else if (x < 0 && y > 0) {
      quadrant = "Q2";
    } else if (x < 0 && y < 0) {
      quadrant = "Q3";
    } else if (x > 0 && y < 0) {
      quadrant = "Q4";
    } else if (x == 0 && y != 0) {
      quadrant = "Eixo Y";
    } else if (x != 0) {
      quadrant = "Eixo X";
    }

    System.out.printf("%s%n", quadrant);

    sc.close();
  }
}