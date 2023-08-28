package matrizes;

import java.util.Scanner;

/**
 * Problema "matriz_geral"
 * Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
 * Em seguida, fazer as seguintes ações:
 * a) calcular e imprimir a soma de todos os elementos positivos da matriz.
 * b) fazer a leitura do índice de uma linha da matriz e,
 * daí, imprimir todos os elementos desta linha.
 * c) fazer a leitura do índice de uma coluna da matriz e,
 * daí, imprimir todos os elementos desta coluna.
 * d) imprimir os elementos da diagonal principal da matriz.
 * e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
 * a matriz alterada.
 */
public class MatrizGeral {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static int readSize(Scanner sc) {
    System.out.printf("Qual a ordem da matriz (máximo de %d)? ", MAX_SIZE);

    int n = sc.nextInt();

    return n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;
  }

  private static double[][] readMatrix(Scanner sc, int size) {
    double[][] matrix = new double[size][size];

    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        System.out.printf("Elemento [%d, %d]: ", i, j);
        matrix[i][j] = sc.nextDouble();
      }
    }

    return matrix;
  }

  private static void calculateAndPrintSumOfPositiveElementsOf(double[][] matrix) {
    double summation = 0;

    for (double[] row : matrix) {
      for (double element : row) {
        if (element > 0) {
          summation += element;
        }
      }
    }

    System.out.printf("%n%nSOMA DOS POSITIVOS: %.1f%n", summation);
  }

  private static int getIndexOfDimension(Scanner sc, Dimension dimension, int size) {
    int index = 0;

    boolean indexIsValid = false;

    while (!indexIsValid) {
      switch (dimension) {
        case ROW -> System.out.printf("%nEscolha uma linha: ");
        case COLUMN -> System.out.printf("%nEscolha uma coluna: ");
      }

      index = sc.nextInt();

      indexIsValid = index >= 0 && index < size;

      if (!indexIsValid) {
        System.out.printf("VALOR FORA DA FAIXA (de %d a %d)! ESCOLHA NOVAMENTE!", 0, size - 1);
      }

    }

    return index;
  }

  private static void printElementsOfDimension(Dimension dimension, int index, double[][] matrix) {
    switch (dimension) {
      case ROW -> {
        if (index < matrix.length) {
          System.out.printf("LINHA ESCOLHIDA (%d): ", index);
          for (double element : matrix[index]) {
            System.out.printf("%.1f ", element);
          }
        }
      }
      case COLUMN -> {
        if (index < matrix[0].length) {
          System.out.printf("COLUNA ESCOLHIDA (%d): ", index);
          for (int i = 0; i < matrix[0].length; i++) {
            System.out.printf("%.1f ", matrix[i][index]);
          }
        }
      }
    }
    System.out.println();
  }

  private static void printDiagonal(double[][] matrix) {
    System.out.println();
    System.out.println("DIAGONAL PRINCIPAL: ");
    for (int i = 0; i < matrix.length; i++) {
      System.out.printf("%.1f ", matrix[i][i]);
    }
    System.out.println();
  }

  private static void squareTheNegativeElementsOf(double[][] matrix) {
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[0].length; j++) {
        if (matrix[i][j] < 0) {
          matrix[i][j] *= matrix[i][j];
        }
      }
    }
  }

  private static void printMatrix(double[][] matrix) {
    System.out.println("MATRIZ ALTERADA:");
    for (double[] row : matrix) {
      for (double element : row) {
        System.out.printf("%.1f ", element);
      }
      System.out.println();
    }
    System.out.println();
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = readSize(sc);

    double[][] matrix = readMatrix(sc, n);

    calculateAndPrintSumOfPositiveElementsOf(matrix);

    final int row = getIndexOfDimension(sc, Dimension.ROW, matrix.length);
    printElementsOfDimension(Dimension.ROW, row, matrix);

    final int column = getIndexOfDimension(sc, Dimension.COLUMN, matrix.length);
    printElementsOfDimension(Dimension.COLUMN, column, matrix);

    printDiagonal(matrix);

    squareTheNegativeElementsOf(matrix);

    printMatrix(matrix);

    sc.close();
  }

  private enum Dimension {
    /**
     * Row dimensions.
     */
    ROW,
    /**
     * Column dimensions.
     */
    COLUMN,
  }
}