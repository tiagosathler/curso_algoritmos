package estruturas.repetidas;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 * Problema "experiencias"
 * Maria acabou de iniciar seu curso de graduação na faculdade de medicina
 * e precisa de sua ajuda para organizar os experimentos de um laboratório
 * o qual ela é responsável.
 * Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório
 * e o percentual de cada tipo de cobaia utilizada.
 * Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos.
 * Para obter estas informações, ela sabe exatamente o número de experimentos
 * que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas
 * em cada experimento.
 * Faça um programa que leia um valor inteiro N que indica os vários casos de teste
 * que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade
 * de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
 * de cobaia (R:Rato S:Sapo C:Coelho).
 * Apresente o total de cobaias utilizadas, o total de cada tipo de
 * cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas,
 * sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
 */
public class Experiencias {
  private static final int MIN_CASES = 1;
  private static final int MAX_CASES = 15;

  private static final String MICE_STRING = "R";
  private static final String FROGS_STRING = "S";
  private static final String RABBITS_STRING = "C";

  private static Map<String, String> inputChoice(Scanner sc) {
    Map<String, String> animal = new HashMap<>();

    System.out.print("Tipo de cobaia: (R)ato, (S)apo, (C)oelho: ");
    String key = sc.next().toUpperCase().substring(0, 1);

    switch (key) {
      case MICE_STRING -> {
        animal.put("key", MICE_STRING);
        animal.put("specie", "ratos");
      }
      case FROGS_STRING -> {
        animal.put("key", FROGS_STRING);
        animal.put("specie", "sapos");
      }
      case RABBITS_STRING -> {
        animal.put("key", RABBITS_STRING);
        animal.put("specie", "coelhos");
      }
      default -> System.out.println("Opção inválida! Tente novamente.");
    }

    return animal;
  }

  private static boolean inputAnimalQuantity(Scanner sc, Map<String, String> animal, Map<String, Integer> animals) {
    String key = animal.get("key");
    String specie = animal.get("specie");

    System.out.printf("Digite a quantidade de %s: ", specie);
    final int quantity = sc.nextInt();

    if (quantity <= 0) {
      System.out.println("Quantidade inválida (menor que 0)! Tente novamente.");
      return false;
    }

    animals.replace(key, animals.get(key) + quantity);
    return true;
  }

  private static void printReport(Map<String, Integer> animals) {
    final int total = animals.get(MICE_STRING)
            + animals.get(FROGS_STRING)
            + animals.get(RABBITS_STRING);

    final double perMice = 100.0 * animals.get(MICE_STRING) / total;
    final double perFrogs = 100.0 * animals.get(FROGS_STRING) / total;
    final double perRabbits = 100.0 * animals.get(RABBITS_STRING) / total;

    System.out.println("RELATÓRIO FINAL:");
    System.out.printf("Total: %d cobaias%n%n", total);
    System.out.printf("Total de coelhos: %d (%.2f %%)%n", animals.get(RABBITS_STRING), perRabbits);
    System.out.printf("Total de ratos: %d (%.2f %%)%n", animals.get(MICE_STRING), perMice);
    System.out.printf("Total de sapos: %d (%.2f %%)%n", animals.get(FROGS_STRING), perFrogs);
  }

  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Quantos casos de teste serão digitados? ");
    int n = sc.nextInt();

    n = n < MIN_CASES || n > MAX_CASES ? MIN_CASES : n;

    final Map<String, Integer> animals = new HashMap<>();

    animals.put(MICE_STRING, 0);
    animals.put(FROGS_STRING, 0);
    animals.put(RABBITS_STRING, 0);

    for (int i = 1; i <= n; i++) {

      boolean inputed = false;

      while (!inputed) {
        System.out.printf("%nEntrada número %d de %d:%n", i, n);

        Map<String, String> animal = inputChoice(sc);

        if (animal.containsKey("key") && animal.containsKey("specie")) {
          inputed = inputAnimalQuantity(sc, animal, animals);
        }
      }
    }

    printReport(animals);

    sc.close();
  }
}