package estruturas.sequencial;

import java.util.Scanner;

/**
 * Problema "duracao"
 * Fazer um programa para ler uma duração de tempo em segundos,
 * daí imprimir na tela esta duração no formato: horas:minutos:segundos.
 */
public class Duracao {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a duração em segundos: ");
    final int duration = sc.nextInt();

    final int hours = duration / 3600;
    final int minutes = duration % 3600 / 60;
    final int seconds = (duration % 3600) % 60;

    System.out.printf("%d : %2d : %2d%n", hours, minutes, seconds);
    sc.close();
  }
}