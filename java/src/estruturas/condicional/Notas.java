package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "notas"
 * Fazer um programa para ler as duas notas que um aluno obteve
 * no primeiro e segundo semestres de uma disciplina anual.
 * Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal)
 * no ano juntamente com um texto explicativo.
 * Caso a nota final do aluno seja inferior a 60,00,
 * mostrar a mensagem "REPROVADO", conforme exemplos.
 */
public class Notas {
  private static final double GRADE_CRITERIA = 60.0;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a primeira nota: ");
    final double gradeA = sc.nextDouble();

    System.out.print("Digite a segunda nota: ");
    final double gradeB = sc.nextDouble();

    final double finalGrade = gradeA + gradeB;

    System.out.printf("NOTAL FINAL = %.1f%n", finalGrade);

    if (finalGrade >= GRADE_CRITERIA) {
      System.out.println("APROVADO!");
    } else {
      System.out.println("REPROVADO!");
    }

    sc.close();
  }

}