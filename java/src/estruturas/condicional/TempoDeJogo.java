package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "tempo_de_jogo"
 * Leia a hora inicial e a hora final de um jogo.
 * A seguir calcule a duração do jogo, sabendo que o mesmo
 * pode começar em um dia e terminar em outro, tendo uma
 * duração mínima de 1 hora e máxima de 24 horas.
 */
public class TempoDeJogo {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Hora inicial: ");
    final int start = sc.nextInt();

    System.out.print("Hora final: ");
    final int end = sc.nextInt();

    int duration;
    if (end > start) {
      duration = end - start;
    } else {
      duration = 24 - (start - end);
    }

    System.out.printf("O JOGO DUROU %d HORA(S)%n", duration);
    sc.close();
  }

}