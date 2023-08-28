package matrizes;

import java.util.Scanner;

/**
 * Problema "acima_diagonal"
 * Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 * contendo números inteiros. Mostrar a soma dos elementos acima da
 * diagonal principal.
 */
public class AcimaDiagonal {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static int readSize(Scanner sc) {
    System.out.printf("Qual a ordem da matriz (máximo de %d)? ", MAX_SIZE);

    int n = sc.nextInt();

    return n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;
  }

  private static int[][] readMatrix(Scanner sc, int size) {
    int[][] matrix = new int[size][size];

    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        System.out.printf("Elemento [%d, %d]: ", i, j);
        matrix[i][j] = sc.nextInt();
      }
    }

    return matrix;
  }

  private static int calculateSumOfElementsAboveDiagonal(int[][] matrix) {
    int summation = 0;

    for (int i = 0; i < matrix.length; i++) {
      for (int j = i + 1; j < matrix[i].length; j++) {
        summation += matrix[i][j];
      }
    }

    return summation;
  }

  private static void printSummation(int summation) {
    System.out.printf("%n%nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d%n", summation);
  }


  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = readSize(sc);

    int[][] matrix = readMatrix(sc, n);

    int summation = calculateSumOfElementsAboveDiagonal(matrix);

    printSummation(summation);

    sc.close();
  }
}