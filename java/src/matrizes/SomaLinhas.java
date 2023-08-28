package matrizes;

import java.util.Scanner;

/**
 * Problema "soma_linhas"
 * Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
 * de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
 * seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
 */
public class SomaLinhas {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static int readSizeOf(Scanner sc, String dimension) {
    System.out.printf("Quantas %s vai ter cada matriz (máximo de %d)? ", dimension, MAX_SIZE);

    int d = sc.nextInt();

    return d < MIN_SIZE || d > MAX_SIZE ? MIN_SIZE : d;
  }

  private static double[][] readMatrix(Scanner sc, int rows, int columns) {
    double[][] matrix = new double[rows][columns];

    for (int i = 0; i < matrix.length; i++) {
      System.out.printf("Digite os %d elementos da %dª linha (de %d linhas):%n", columns, i + 1, rows);
      for (int j = 0; j < matrix[i].length; j++) {
        matrix[i][j] = sc.nextDouble();
      }
    }

    return matrix;
  }

  private static double[] getSumOfRows(double[][] matrix) {
    double[] sumOfRows = new double[matrix.length];

    for (int i = 0; i < matrix.length; i++) {
      sumOfRows[i] = 0;
      for (int j = 0; j < matrix[i].length; j++) {
        sumOfRows[i] += matrix[i][j];
      }
    }

    return sumOfRows;
  }

  private static void printSumOfRows(double[] rows) {
    System.out.println("VETOR GERADO:");
    for (double element : rows) {
      System.out.printf("%.1f%n", element);
    }
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int rows = readSizeOf(sc, "linhas");
    int columns = readSizeOf(sc, "colunas");

    double[][] matrix = readMatrix(sc, rows, columns);

    double[] sumOfRows = getSumOfRows(matrix);

    printSumOfRows(sumOfRows);

    sc.close();
  }
}