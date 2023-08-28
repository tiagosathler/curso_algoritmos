package vetores;

import java.util.Scanner;

/**
 * Problema "soma_vetores"
 * Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
 * terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
 * o vetor C gerado.
 */
public class SomaVetores {
  private static final int MIN_SIZE = 1;
  private static final int MAX_SIZE = 10;

  private static int[] readVector(Scanner sc, int size, char vectorName) {
    System.out.printf("%nDigite os valores do vetor %c:%n", vectorName);

    int[] vector = new int[size];

    for (int i = 0; i < size; i++) {
      vector[i] = sc.nextInt();
    }

    return vector;
  }

  private static int[] sumVectors(int[] vectorA, int[] vectorB) {
    int size = Math.min(vectorA.length, vectorB.length);

    int[] sumVector = new int[size];

    for (int i = 0; i < size; i++) {
      sumVector[i] = vectorA[i] + vectorB[i];
    }

    return sumVector;
  }

  private static void printResult(int[] vector) {
    System.out.printf("%nVETOR RESULTANTE:%n");
    for (int v : vector) {
      System.out.printf("%d%n", v);
    }
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos valores vai ter cada vetor (máximo de %d)? ", MAX_SIZE);
    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    int[] vectorA = readVector(sc, n, 'A');
    int[] vectorB = readVector(sc, n, 'B');

    int[] vectorC = sumVectors(vectorA, vectorB);

    printResult(vectorC);

    sc.close();
  }
}