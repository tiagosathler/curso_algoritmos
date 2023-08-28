package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "troco_verificado"
 * Fazer um programa para calcular o troco no processo de pagamento
 * de um produto de uma mercearia.
 * <p>
 * O programa deve ler o preço unitário do produto,
 * a quantidade de unidades compradas deste produto,
 * e o valor em dinheiro dado pelo cliente.
 * <p>
 * Seu programa deve mostrar o valor do troco a ser devolvido
 * ao cliente.
 * <p>
 * Se o dinheiro dado pelo cliente não for suficiente,
 * mostrar uma mensagem informando o valor restante conforme exemplo.
 */
public class TrocoVerificado {

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
    final double received = sc.nextDouble();

    final double change = received - price * quantity;

    if (change >= 0) {
      System.out.printf("TROCO = R$ %.2f%n", change);
    } else {
      System.out.printf("DINHEIRO INSUFICIENTE. FALTAM R$ %.2f%n", -change);
    }

    sc.close();
  }
}