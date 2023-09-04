package estruturas.repetidas;

import java.util.Scanner;

/**
 * Problema "combustivel"
 * Um posto de combustíveis deseja determinar qual de seus produtos
 * tem a preferência de seus clientes.
 * Escreva um algoritmo para ler o tipo de combustível abastecido
 * (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
 * Caso o usuário informe um código inválido (fora da faixa de 1 a
 * 4) deve ser solicitado um novo código (até que seja válido).
 * O programa será encerrado quando o código informado for o número 4,
 * devendo então mostrar a mensagem "MUITO OBRIGADO", bem
 * como as quantidades de cada combustível.
 */
public class Combustivel {

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Códigos:");
    System.out.println("0 - álcool");
    System.out.println("1 - gasolina");
    System.out.println("3 - diesel");

    int alcohol = 0;
    int gasoline = 0;
    int diesel = 0;

    int option;
    do {
      System.out.println("Informe um código (1, 2, 3) ou 4 para parar: ");
      option = sc.nextInt();

      switch (option) {
        case 1 -> alcohol++;
        case 2 -> gasoline++;
        case 3 -> diesel++;
        default -> {
        }
      }
    } while (option != 4);

    System.out.println("MUITO OBRIGADO");
    System.out.printf("  Álcool: %d%n", alcohol);
    System.out.printf("Gasolina: %d%n", gasoline);
    System.out.printf("  Diesel: %d%n", diesel);

    sc.close();
  }
}