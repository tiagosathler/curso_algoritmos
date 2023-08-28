package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "glicose"
 * Fazer um programa para ler a quantidade de glicose
 * no sangue de uma pessoa e depois mostrar na tela a
 * classificação desta glicose de acordo com a tabela de
 * referência abaixo:
 * |----------------------------------------------|
 * | Classificação  | Glicose                     |
 * |----------------------------------------------|
 * | Normal         | Até 100 mg/dl               |
 * | Elevado        | Maior que 100 até 140 mg/dl |
 * | Diabetes       | Maior de 140 mg/dl          |
 * |----------------------------------------------|.
 */
public class Glicose {

  private static final double NORMAL_LEVEL = 100.0;

  private static final double HIGH_LEVEL = 140.0;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a medida da glicose: ");
    final double glucoseLevel = sc.nextDouble();

    String classification = "diabetes";
    if (glucoseLevel <= NORMAL_LEVEL) {
      classification = "normal";
    } else if (glucoseLevel <= HIGH_LEVEL) {
      classification = "elevado";
    }

    System.out.printf("Classificação = %s%n", classification);

    sc.close();
  }
}