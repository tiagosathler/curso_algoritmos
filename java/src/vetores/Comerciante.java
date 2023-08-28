package vetores;

import java.util.Scanner;

/**
 * Problema "comerciante"
 * Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
 * Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome,
 * preço de compra e preço de venda das mesmas.
 * Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
 * proporcionaram:
 * - lucro < 10%
 * - 10% ≤ lucro ≤ 20%
 * - lucro > 20%
 * Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
 * o lucro total.
 */
public class Comerciante {

  private static final short MIN_SIZE = 1;
  private static final short MAX_SIZE = 10;

  private static final short PROFIT_LIMIT_1 = 10;
  private static final short PROFIT_LIMIT_2 = 20;

  private static Product[] getProduct(Scanner sc, int size) {
    Product[] products = new Product[size];

    for (int i = 0; i < products.length; i++) {
      System.out.printf("%nProduto %d de %d:%n", i + 1, products.length);

      sc.nextLine();
      System.out.print("Nome: ");
      String name = sc.nextLine();

      System.out.print("Preço de compra: ");
      double purchasePrice = sc.nextDouble();

      System.out.print("Preço de venda: ");
      double salePrice = sc.nextDouble();

      double profit = salePrice - purchasePrice;
      products[i] = new Product(name, salePrice, purchasePrice, profit);
    }

    return products;
  }

  private static Statistic getStatistics(Product[] products) {
    int loss = 0;

    int profitCountRange1 = 0;
    int profitCountRange2 = 0;
    int profitCountRange3 = 0;

    for (Product p : products) {
      double profitPercentage = 100 * p.profit / p.purchasePrice;
      if (profitPercentage > PROFIT_LIMIT_2) {
        profitCountRange3++;
      } else if (profitPercentage >= PROFIT_LIMIT_1) {
        profitCountRange2++;
      } else if (profitPercentage >= 0) {
        profitCountRange1++;
      } else {
        loss++;
      }
    }

    double totalSale = 0;
    double totalPurchase = 0;
    double totalProfit = 0;

    for (Product p : products) {
      totalSale += p.salePrice;
      totalPurchase += p.purchasePrice;
      totalProfit += p.profit;
    }
    return new Statistic(loss, profitCountRange1, profitCountRange2, profitCountRange3, totalSale, totalPurchase, totalProfit);
  }

  private static void printStatistic(Statistic s) {
    System.out.printf("%n%nRELATÓRIO%n");
    System.out.printf("Lucro abaixo de %d%%: %d%n", PROFIT_LIMIT_1, s.profitCountRange1);
    System.out.printf("Lucro entre de %d%% e %d%%: %d%n", PROFIT_LIMIT_1, PROFIT_LIMIT_2, s.profitCountRange2);
    System.out.printf("Lucro acima de %d%%: %d%n", PROFIT_LIMIT_2, s.profitCountRange3);
    System.out.printf("Prejuízos: %d%n", s.loss);

    System.out.printf("%nValor total de compras: R$ %.2f%n", s.totalPurchase);
    System.out.printf("%nValor total de vendas: R$ %.2f%n", s.totalSale);
    System.out.printf("%nLucro total: R$ %.2f%n%n", s.totalProfit);
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);

    System.out.printf("Serão digitados dados de quantos produtos (máximo de %d)? ", MAX_SIZE);

    int n = sc.nextInt();

    n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

    Product[] products = getProduct(sc, n);

    printStatistic(getStatistics(products));

    sc.close();
  }

  private record Product(String name, double salePrice, double purchasePrice, double profit) {
  }

  private record Statistic(int loss, int profitCountRange1, int profitCountRange2, int profitCountRange3,
                           double totalSale, double totalPurchase, double totalProfit) {
  }
}