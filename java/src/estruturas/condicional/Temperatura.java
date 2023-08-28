package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "temperatura"
 * Deseja-se converter uma medida de temperatura da escala Celsius
 * para Fahrenheit ou vice-versa.
 * Para isso, você deve construir um programa que leia a letra "C" ou "F"
 * indicando em qual escala vai ser informada uma temperatura.
 * Em seguida o programa deve mostrar a temperatura na outra escala com duas casas
 * decimais.
 * A seguir são dadas as fórmulas para converter de Fahrenheit para Celsius
 * C = (F - 32) * 5 / 9
 * F = C * 9 / 5 + 32
 */
public class Temperatura {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Você vai digitar a temperatura em qual escala (C/F)? ");
    final char scale = sc.next().toUpperCase().charAt(0);

    String convertedScale = "";
    double suppliedTemp = 0;
    double convertedTemp = 0;

    switch (scale) {
      case 'F' -> {
        System.out.print("Digite a temperatura em Fahrenheit: ");
        suppliedTemp = sc.nextDouble();

        convertedTemp = (suppliedTemp - 32) * 5 / 9;
        convertedScale = "Celsius";
      }
      case 'C' -> {
        convertedScale = "Fahrenheit";
        System.out.print("Digite a temperatura em Celsius: ");
        suppliedTemp = sc.nextDouble();

        convertedTemp = suppliedTemp * 9 / 5 + 32;
      }
      default -> System.out.println("OPÇÃO INVÁLIDA!");
    }

    if (suppliedTemp != convertedTemp) {
      System.out.printf("Temperatura convertida: %.2fº %s%n", convertedTemp, convertedScale);
    }

    sc.close();
  }
}