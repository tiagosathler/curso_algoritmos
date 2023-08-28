package matrizes;

import java.util.Scanner;

/**
 * Problema "negativos_matriz"
 * Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros. Em
 * seguida, mostrar na tela somente os números negativos da matriz.
 */
public class NegativosMatriz {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static int readSizeOf(Scanner sc, String dimension) {
    System.out.printf("Quantas %s vai ter cada matriz (máximo de %d)? ", dimension, MAX_SIZE);

    int d = sc.nextInt();

    return d < MIN_SIZE || d > MAX_SIZE ? MIN_SIZE : d;
  }


  private static int[][] readMatrix(Scanner sc, int rows, int columns) {
    int[][] matrix = new int[rows][columns];

    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        System.out.printf("Elemento [%d, %d]: ", i, j);
        matrix[i][j] = sc.nextInt();
      }
    }

    return matrix;
  }

  private static void printNegativeElements(int[][] matrix) {
    System.out.println("VALORES NEGATIVOS");
    for (int[] row : matrix) {
      for (int element : row) {
        if (element < 0) {
          System.out.printf("%d%n", element);
        }
      }
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

    int[][] matrix = readMatrix(sc, rows, columns);

    printNegativeElements(matrix);

    sc.close();
  }
}