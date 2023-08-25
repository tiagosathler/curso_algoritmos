package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "pagamento"
 * Fazer um programa para ler o nome de um(a) funcionário(a),
 * o valor que ele(a) recebe por hora, e a quantidade de horas
 * trabalhadas por ele(a).
 * Ao final, mostrar o valor do pagamento do funcionário com
 * uma mensagem explicativa
 */
public class Pagamento {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Nome: ");
    final String name = sc.nextLine();

    System.out.print("Valor por hora: ");
    final double valuePerHour = sc.nextDouble();

    System.out.print("Horas trabalhadas: ");
    final int workedHours = sc.nextInt();

    final double payment = valuePerHour * workedHours;

    System.out.printf("O pagamento para %s deve ser de R$ %.2f%n", name, payment);
    sc.close();
  }
}