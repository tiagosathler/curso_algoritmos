package vetores;

import java.util.Scanner;

/**
 * Problema "dados_pessoas"
 * Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas.
 * Fazer um programa que calcule e escreva a maior e a menor altura do grupo,
 * a média de altura das mulheres, e o número de homens.
 */
public class DadosPessoas {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static Person[] inputPerson(Scanner sc, int size) {
    final Person[] people = new Person[size];

    for (int i = 0; i < people.length; i++) {
      System.out.printf("%nDados da %dª pessoa de %d:%n", i + 1, size);
      Person person = new Person();

      System.out.print("Altura (m): ");
      person.setHeight(sc.nextDouble());

      char gender;
      do {
        sc.nextLine();
        System.out.print("Gênero ('F/f' ou 'M/m'): ");
        gender = sc.next().toUpperCase().charAt(0);
      } while (gender != 'M' && gender != 'F');

      person.setGender(gender);
      people[i] = person;
    }

    return people;
  }

  private static Statistics getStatistics(Person[] people) {
    int men = 0;
    int women = 0;

    double heightAverage = 0;
    double maleHeightAverage = 0;
    double femaleHeightAverage = 0;

    for (Person p : people) {
      heightAverage += p.getHeight() / people.length;

      if (p.getGender() == 'M') {
        men++;
        maleHeightAverage += p.getHeight();
      } else {
        women++;
        femaleHeightAverage += p.getHeight();
      }
    }

    if (men > 0) {
      maleHeightAverage /= men;
    }

    if (women > 0) {
      femaleHeightAverage /= women;
    }

    double greaterHeight = people[0].getHeight();
    char tallestPersonGender = people[0].getGender();

    double shorterHeight = people[0].getHeight();
    char shortestPersonGender = people[0].getGender();

    for (Person p : people) {
      if (p.getHeight() > greaterHeight) {
        greaterHeight = p.getHeight();
        tallestPersonGender = p.getGender();
      }
      if (p.getHeight() < shorterHeight) {
        shorterHeight = p.getHeight();
        shortestPersonGender = p.getGender();
      }
    }
    return new Statistics(men, women, heightAverage, maleHeightAverage, femaleHeightAverage, greaterHeight, tallestPersonGender, shorterHeight, shortestPersonGender);
  }

  private static void printStatistics(Statistics s) {
    int total = s.men + s.women;

    System.out.printf("%nAltura média geral: %.2fm%n", s.heightAverage);

    System.out.printf("Menor altura: %.2fm ('%s')%n", s.shorterHeight, s.shortestPersonGender);

    System.out.printf("Maior altura: %.2fm ('%s')%n", s.greaterHeight, s.tallestPersonGender);

    if (s.men > 0) {
      double menPercentage = (double) 100 * s.men / total;
      System.out.printf("%nQuantidade de homens: %d (%.1f %%)%n", s.men, menPercentage);
      System.out.printf("Média da altura dos homens: %.2fm%n", s.maleHeightAverage);
    } else {
      System.out.println("NÃO HÁ HOMENS!");
    }

    if (s.women > 0) {
      double womenPercentage = (double) 100 * s.women / total;
      System.out.printf("%nQuantidade de mulheres: %d (%.1f %%)%n", s.women, womenPercentage);
      System.out.printf("Média da altura dos mulheres: %.2fm%n", s.femaleHeightAverage);
    } else {
      System.out.println("NÃO HÁ MULHERES!");
    }
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.printf("Quantos pessoas serão digitadas (máximo de %d)? ", MAX_SIZE);

    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    Person[] people = inputPerson(sc, n);

    printStatistics(getStatistics(people));

    sc.close();
  }

  private static class Person {
    /**
     * The Gender.
     */
    char gender;
    /**
     * The Height.
     */
    double height;

    /**
     * Gets gender.
     *
     * @return the gender
     */
    public char getGender() {
      return gender;
    }

    /**
     * Sets gender.
     *
     * @param gender the gender
     */
    public void setGender(char gender) {
      this.gender = gender;
    }

    /**
     * Gets height.
     *
     * @return the height
     */
    public double getHeight() {
      return height;
    }

    /**
     * Sets height.
     *
     * @param height the height
     */
    public void setHeight(double height) {
      this.height = height;
    }
  }

  private record Statistics(int men, int women, double heightAverage, double maleHeightAverage,
                            double femaleHeightAverage, double greaterHeight, char tallestPersonGender,
                            double shorterHeight, char shortestPersonGender) {
  }
}