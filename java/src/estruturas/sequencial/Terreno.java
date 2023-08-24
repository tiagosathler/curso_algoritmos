package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "terreno"
 * Fazer um programa para ler as medidas da largura e
 * comprimento de um terreno retangular com uma casa decimal,
 * bem como o valor do metro quadrado do terreno com duas casas decimais.
 * Em seguida, o programa deve mostrar o valor da área do terreno,
 * bem como o valor do preço do terreno, ambos com duas casas decimais.
 */
public class Terreno {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a largura do terreno: ");
    double width = sc.nextDouble();

    System.out.print("Digite o comprimento do terreno: ");
    double length = sc.nextDouble();

    System.out.print("Digite o valor do metro quadrado: ");
    double squareMeterValue = sc.nextDouble();

    double area = width * length;
    double price = squareMeterValue * area;

    System.out.printf("Área do terreno: %.2f\n", area);
    System.out.printf("Preço do terreno: %.2f\n", price);

    sc.close();
  }
}