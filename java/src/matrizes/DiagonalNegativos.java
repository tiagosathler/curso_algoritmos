package matrizes;

import java.util.Scanner;

/**
 * Problema "diagonal_negativos"
 * Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 * contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de
 * valores
 * negativos da matriz.
 */
public class DiagonalNegativos {
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

  private static int[] getDiagonal(int[][] matrix) {
    int[] diagonal = new int[matrix.length];
    for (int i = 0; i < matrix.length; i++) {
      diagonal[i] = matrix[i][i];
    }
    return diagonal;
  }

  private static int getNegatives(int[][] matrix) {
    int count = 0;
    for (int[] row : matrix) {
      for (int element : row) {
        if (element < 0) {
          count++;
        }
      }
    }
    return count;
  }

  private static void printDiagonal(int[] diagonal) {
    System.out.println("DIAGONAL PRINCIPAL:");
    for (int element : diagonal) {
      System.out.printf("%d ", element);
    }
    System.out.println();
  }

  private static void printNegatives(int negativesCount) {
    System.out.printf("QUANTIDADE DE NEGATIVOS = %d%n", negativesCount);
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

    int[] diagonal = getDiagonal(matrix);

    int negativesCount = getNegatives(matrix);

    printDiagonal(diagonal);

    printNegatives(negativesCount);

    sc.close();
  }
}