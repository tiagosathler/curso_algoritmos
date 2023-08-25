package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "validacao_de_nota"
 * Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 * Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
 * (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada
 * separadamente.
 */
public class ValidacaoDeNota {
  private static final int LOWER_BOUND = 0;
  private static final int UPPER_BOUND = 10;

  private static double readGrade(Scanner sc) {
    double grade = sc.nextDouble();

    while (grade < LOWER_BOUND || grade > UPPER_BOUND) {
      System.out.print("Valor inválido! Tente novamente: ");
      grade = sc.nextDouble();
    }

    return grade;
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    double summation = 0.0;

    System.out.print("Digite a primeira nota: ");
    summation += readGrade(sc);

    System.out.print("Digite a segunda nota: ");
    summation += readGrade(sc);

    final double average = summation / 2.0;
    System.out.printf("MÉDIA = %.2f%n", average);

    sc.close();
  }
}