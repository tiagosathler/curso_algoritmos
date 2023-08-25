package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "circulo"
 * Fazer um programa para ler o valor "r" do raio de um círculo,
 * e depois mostrar o valor da área do círculo com três casas decimais.
 * A fórmula da área do círculo é a seguinte: area = 𝜋. 𝑟. Você pode
 * usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação,
 * ou então, se preferir, use diretamente o valor 3.14159.
 */
public class Circulo {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite o valor do raio do circulo: ");
    double radius = sc.nextDouble();

    double area = Math.PI * Math.pow(radius, 2.0);

    System.out.printf("AREA = %.4f%n", area);

    sc.close();
  }
}