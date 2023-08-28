package vetores;

import java.util.Scanner;

/**
 * Problema "aprovados"
 * Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
 * no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
 * os nomes dos alunos aprovados, considerando aprovado aqueles cuja média das notas seja maior ou
 * igual a 6.0 (seis).
 */
public class Aprovados {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static final short NUM_OF_GRADES = 2;
  private static final short PASS_GRADE = 6;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos pessoas você vai digitar (máximo de %d)? ", MAX_SIZE);

    int n = sc.nextInt();
    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    final Student[] students = new Student[n];

    for (int i = 0; i < students.length; i++) {
      students[i] = new Student();

      sc.nextLine();

      System.out.printf("%nDados da %dª de %d:%n", i + 1, n);

      System.out.print("Nome: ");
      students[i].setName(sc.nextLine());

      for (int j = 0; j < NUM_OF_GRADES; j++) {
        System.out.printf("%dª nota: ", j + 1);
        students[i].getGrades()[j] = sc.nextDouble();
      }
    }

    for (Student s : students) {
      double average = 0.0;

      for (int j = 0; j < NUM_OF_GRADES; j++) {
        average += s.getGrades()[j] / NUM_OF_GRADES;
      }

      s.setAverage(average);
    }

    int approvedStudents = 0;
    for (Student s : students) {
      if (s.getAverage() >= PASS_GRADE) {
        approvedStudents++;
      }
    }

    if (approvedStudents > 0) {
      System.out.printf("%nALUNOS APROVADOS:%n");

      for (Student s : students) {
        if (s.getAverage() >= PASS_GRADE) {
          System.out.printf(" - %s%n", s.getName());
        }
      }
    } else {
      System.out.println("NENHUM ALUNO FOI APROVADO!");
    }

    sc.close();
  }

  private static class Student {
    private final double[] grades = new double[NUM_OF_GRADES];
    private String name;
    private double average;

    /**
     * Gets average.
     *
     * @return the average
     */
    public double getAverage() {
      return average;
    }

    /**
     * Sets average.
     *
     * @param average the average
     */
    public void setAverage(double average) {
      this.average = average;
    }

    /**
     * Gets name.
     *
     * @return the name
     */
    public String getName() {
      return name;
    }

    /**
     * Sets name.
     *
     * @param name the name
     */
    public void setName(String name) {
      this.name = name;
    }

    /**
     * Get grades double [ ].
     *
     * @return the double [ ]
     */
    public double[] getGrades() {
      return grades;
    }
  }
}