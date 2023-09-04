package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "quadrante"
 * Escreva um programa para ler as coordenadas (X,Y)
 * de uma quantidade indeterminada de pontos no
 * sistema cartesiano. Para cada ponto escrever
 * o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
 * O algoritmo será encerrado quando pelo menos
 * uma de duas coordenadas for NULA (nesta situação sem
 * escrever mensagem alguma).
 * y
 * Q2  |  Q1
 * --------- x
 * Q3  |  Q4
 */
public class Quadrante {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int x;
    int y;

    do {
      System.out.printf("%nDigite os valores das coordenadas X e Y:%n");

      x = sc.nextInt();
      y = sc.nextInt();

      if (x > 0 && y > 0) {
        System.out.println("QUADRANTE Q1");
      } else if (x < 0 && y > 0) {
        System.out.println("QUADRANTE Q2");
      } else if (x < 0 && y < 0) {
        System.out.println("QUADRANTE Q3");
      } else if (x > 0 && y < 0) {
        System.out.println("QUADRANTE Q4");
      }

    } while (x != 0 && y != 0);
    sc.close();
  }
}