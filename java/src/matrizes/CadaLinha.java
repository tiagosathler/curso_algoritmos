package matrizes;

import java.util.Scanner;

/**
 * Problema "cada_linha"
 * Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10).
 * Mostrar qual o maior elemento de cada linha. Suponha não haver empates.
 */
public class CadaLinha {
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

  private static int[] getHighestNumberPerRow(int[][] matrix) {
    int[] highestNumberPerRow = new int[matrix.length];

    for (int i = 0; i < matrix.length; i++) {
      highestNumberPerRow[i] = matrix[i][0];
      for (int j = 1; j < matrix[i].length; j++) {
        if (matrix[i][j] > highestNumberPerRow[i]) {
          highestNumberPerRow[i] = matrix[i][j];
        }
      }
    }
    return highestNumberPerRow;
  }

  private static void printHighestNumbers(int[] highestNumberPerRow) {
    System.out.println("MAIOR ELEMENTO DE CADA LINHA:");
    for (int highestNumber : highestNumberPerRow) {
      System.out.printf("%d%n", highestNumber);
    }
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

    int[] highestNumberPerRow = getHighestNumberPerRow(matrix);

    printHighestNumbers(highestNumberPerRow);

    sc.close();
  }
}