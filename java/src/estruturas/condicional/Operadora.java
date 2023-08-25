package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "operadora"
 * Uma operadora de telefonia cobra R$ 50.00 por um plano básico
 * que dá direito a 100 minutos de telefone.
 * Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00.
 * Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu,
 * daí mostrar o valor a ser pago.
 */
public class Operadora {
  private static final int ALLOWANCE_MINUTES = 100;
  private static final double EXCESS_MINUTES_COST = 2.00;

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a quantidade de minutos: ");
    final int minutes = sc.nextInt();

    double totalCost = 50.00;
    if (minutes > ALLOWANCE_MINUTES) {
      totalCost += (minutes - ALLOWANCE_MINUTES) * EXCESS_MINUTES_COST;
    }

    System.out.printf("VALOR A PAGAR = R$ %.2f%n", totalCost);

    sc.close();
  }
}