package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "idades"
 * Fazer um programa para ler o nome e idade de duas pessoas.
 * Ao final mostrar uma mensagem com os nomes e a idade média
 * entre essas pessoas, com uma casa decimal
 */
public class Idades {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  static public void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Dados da primeira pessoa:");
    System.out.print("Nome: ");
    String name1 = sc.nextLine();

    System.out.print("Idade: ");
    int age1 = sc.nextInt();

    sc.nextLine();

    System.out.println("Dados da segunda pessoa:");
    System.out.print("Nome: ");
    String name2 = sc.nextLine();

    System.out.print("Idade: ");
    int age2 = sc.nextInt();

    double averageAge = (age1 + age2) / 2.0;

    System.out.printf("A idade média de %s e %s é de %.1f anos.", name1, name2, averageAge);

    sc.close();
  }
}