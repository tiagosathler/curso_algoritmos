package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "troco"
 * Fazer um programa para calcular o troco no processo de pagamento de um produto
 * de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade
 * de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente
 * (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco
 * a ser devolvido ao cliente.
 */
public class Troco {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Preço unitário do produto: ");
    final double price = sc.nextDouble();

    System.out.print("Quantidade comprada: ");
    final int quantity = sc.nextInt();

    System.out.print("Dinheiro recebido: ");
    final double moneyReceived = sc.nextDouble();

    final double change = moneyReceived - price * quantity;

    System.out.printf("TROCO = %.2f%n", change);

    sc.close();
  }
}