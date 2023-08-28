package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "menor_de_tres"
 * Fazer um programa para ler três números inteiros.
 * Em seguida, mostrar qual o menor dentre os três
 * números lidos.
 * Em caso de empate, mostrar apenas uma vez.
 */
public class MenorDeTres {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Primeiro valor (a): ");
    final int a = sc.nextInt();

    System.out.print("Segundo valor (b): ");
    final int b = sc.nextInt();

    System.out.print("Terceiro valor (c): ");
    final int c = sc.nextInt();

    int smallest = c;
    if (a <= b && a <= c) {
      smallest = a;
    } else if (b <= c) {
      smallest = b;
    }

    System.out.printf("MENOR = %d%n", smallest);

    sc.close();
  }
}