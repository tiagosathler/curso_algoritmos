package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "consumo"
 * Fazer um programa para ler a distância total (em km)
 * percorrida por um carro, bem como o total de combustível
 * gasto por este carro ao percorrer tal distância.
 * Seu programa deve mostrar o consumo médio do carro, com três casas decimais.
 */
public class Consumo {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Distância percorrida: ");
    final double distance = sc.nextDouble();

    System.out.print("Combustível gasto: ");
    final double spentFuel = sc.nextDouble();

    final double averageFuel = distance / spentFuel;
    System.out.printf("%nConsumo médio = %.3f%n", averageFuel);

    sc.close();
  }
}