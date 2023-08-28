package vetores;

import java.util.Scanner;

/**
 * Problema "mais_velho"
 * Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades.
 * Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor.
 * Depois, mostrar na tela o nome da pessoa mais velha.
 */
public class MaisVelho {
  private static final int MIN_SIZE = 1;
  private static final int MAX_SIZE = 10;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Quantos pessoas você vai digitar (máximo de 10)? ");
    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    int[] ages = new int[n];
    String[] names = new String[n];

    for (int i = 0; i < n; i++) {
      sc.nextLine();

      System.out.printf("%nDados da %dª de %d:%n", i + 1, n);

      System.out.print("Nome: ");
      names[i] = sc.nextLine();

      System.out.print("Idade: ");
      ages[i] = sc.nextInt();
    }

    int olderAgeIndex = 0;
    int olderAge = ages[olderAgeIndex];

    for (int i = 0; i < n; i++) {
      if (ages[i] > olderAge) {
        olderAge = ages[i];
        olderAgeIndex = i;
      }
    }

    System.out.printf("%nPessoa mais velha: %s%n", names[olderAgeIndex]);
    sc.close();
  }
}