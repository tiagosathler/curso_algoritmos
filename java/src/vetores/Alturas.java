package vetores;

import java.util.Scanner;

/**
 * Problema "alturas"
 * Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
 * tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
 * bem como os nomes dessas pessoas caso houver.
 */
public class Alturas {
  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;
  private static final short MINOR = 16;

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

    final Person[] people = new Person[n];

    for (int i = 0; i < people.length; i++) {
      sc.nextLine();

      System.out.printf("%nDados da %dª de %d:%n", i + 1, n);

      System.out.print("Nome: ");
      String name = sc.nextLine();

      System.out.print("Idade: ");
      int age = sc.nextInt();

      System.out.print("Altura: ");
      double height = sc.nextDouble();

      people[i] = new Person(name, age, height);
    }

    double heightAverage = 0.0;
    for (Person p : people) {
      heightAverage += p.getHeight() / n;
    }

    double perMinors = 0.0;
    for (Person p : people) {
      if (p.getAge() < MINOR) {
        perMinors += (double) 100 / n;
      }
    }

    System.out.printf("%nAltura média: %.2f", heightAverage);

    System.out.printf("%nPessoas com menos de %d anos: %.1f %%%n", MINOR, perMinors);

    for (Person p : people) {
      if (p.getAge() < MINOR) {
        System.out.printf("- %s%n", p.getName());
      }
    }

    sc.close();
  }

  private static class Person {
    private String name;
    private int age;
    private double height;

    /**
     * Instantiates a new Person.
     *
     * @param name   the name
     * @param age    the age
     * @param height the height
     */
    public Person(String name, int age, double height) {
      this.name = name;
      this.age = age;
      this.height = height;
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
     * Gets age.
     *
     * @return the age
     */
    public int getAge() {
      return age;
    }

    /**
     * Sets age.
     *
     * @param age the age
     */
    public void setAge(int age) {
      this.age = age;
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
}