package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "retangulo"
 * Fazer um programa para ler as medidas da base e altura de um retângulo.
 * Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo,
 * com quatro casas decimais,
 */
public class Retangulo {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  static public void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Base do triângulo: ");
    double base = sc.nextDouble();

    System.out.print("Altura do triângulo: ");
    double height = sc.nextDouble();

    double area = height * base;
    double perimeter = 2 * (base + height);
    double diagonal = Math.sqrt(base * base + height * height);

    System.out.printf("ÁREA = %.4f\n", area);
    System.out.printf("PERÍMETRO = %.4f\n", perimeter);
    System.out.printf("DIAGONAL = %.4f\n", diagonal);

    sc.close();
  }
}