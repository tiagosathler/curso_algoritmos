package matrizes;

import java.util.Scanner;

/**
 * Problema "soma_matrizes"
 * Fazer um programa para ler duas matrizes de números inteiros A e B,
 * contendo de M linhas e N colunas cada (M e N máximo = 10).
 * Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
 * dos elementos correspondentes das matrizes originais.
 * Imprimir na tela a matriz gerada.
 */
public class SomaMatrizes {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static int readSizeOf(Scanner sc, String dimension) {
    System.out.printf("Quantas %s vai ter cada matriz (máximo de %d)? ", dimension, MAX_SIZE);

    int d = sc.nextInt();

    return d < MIN_SIZE || d > MAX_SIZE ? MIN_SIZE : d;
  }

  private static int[][] readMatrixOf(Scanner sc, int rows, int columns, char matrixLetter) {
    int[][] matrix = new int[rows][columns];

    System.out.printf("Digite os valores da matriz %s%n", matrixLetter);

    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        System.out.printf("Elemento [%d, %d]: ", i, j);
        matrix[i][j] = sc.nextInt();
      }
    }

    return matrix;
  }

  private static int[][] sumMatrix(int[][] matrixA, int[][] matrixB) {
    int rows = Math.min(matrixA.length, matrixB.length);
    int columns = Math.min(matrixA[0].length, matrixB[0].length);

    int[][] matrixC = new int[rows][columns];

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
      }
    }

    return matrixC;
  }

  private static void printMatrixSum(int[][] matrix) {
    System.out.println("MATRIZ SOMA:");
    for (int[] row : matrix) {
      for (int element : row) {
        System.out.printf("%d ", element);
      }
      System.out.println();
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

    int[][] matrixA = readMatrixOf(sc, rows, columns, 'A');
    int[][] matrixB = readMatrixOf(sc, rows, columns, 'B');

    int[][] matrixC = sumMatrix(matrixA, matrixB);

    printMatrixSum(matrixC);

    sc.close();
  }
}