package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "lanchonete"
 * Uma lanchonete possui vários produtos. Cada produto possui um código
 * e um preço. Você deve fazer um programa para ler o código e a
 * quantidade comprada de um produto (suponha um código válido), e daí
 * informar qual o valor a ser pago, com duas casas decimais, conforme
 * tabela de produtos abaixo.
 * *--------------------------------------*
 * | Código do produto | Preço do produto |
 * |-------------------|------------------|
 * |         1         |      R$ 5.00     |
 * |         2         |      R$ 3.50     |
 * |         3         |      R$ 4.80     |
 * |         4         |      R$ 8.90     |
 * |         5         |      R$ 7.32     |
 * *--------------------------------------*
 */
public class Lanchonete {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Código do produto comprado: ");
    final int productCode = sc.nextInt();

    double price = 0.0;
    switch (productCode) {
      case 1 -> price = 5.00;
      case 2 -> price = 3.50;
      case 3 -> price = 4.80;
      case 4 -> price = 8.90;
      case 5 -> price = 7.32;
      default -> System.out.println("Produto inexistente!");
    }

    if (price != 0) {
      System.out.print("Quantidade comprada: ");
      final int quantity = sc.nextInt();

      final double amountToPay = price * quantity;
      System.out.printf("Valor a pagar: R$ %.2f%n", amountToPay);
    }

    sc.close();
  }
}