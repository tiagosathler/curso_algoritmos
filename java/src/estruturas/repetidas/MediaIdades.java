package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "media_idades"
 * Faça um programa para ler um número indeterminado de dados,
 * contendo cada um, a idade de um indivíduo.
 * O último dado, que não entrará nos cálculos,
 * contém um valor de idade negativa. Calcular
 * e imprimir a idade média deste grupo de indivíduos.
 * Se for entrado um valor negativo na primeira vez,
 * mostrar a mensagem "IMPOSSIVEL CALCULAR".
 */
public class MediaIdades {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Digite as idades (negativo para sair):");
    int age = sc.nextInt();

    int count = 0;
    int summation = 0;

    while (age >= 0) {
      count++;
      summation += age;
      age = sc.nextInt();
    }

    if (count != 0) {
      final double average = (double) summation / count;
      System.out.printf("MÉDIA = %.2f%n", average);
    } else {
      System.out.println("IMPOSSÍVEL CALCULAR!");
    }

    sc.close();
  }
}