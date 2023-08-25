package estruturas.condicional;

import java.util.Scanner;

/**
 * Problema "aumento"
 * Uma empresa vai conceder um aumento percentual de
 * salário aos seus funcionários dependendo de quanto
 * cada pessoa ganha, conforme tabela ao lado. Fazer um
 * programa para ler o salário de uma pessoa, daí mostrar
 * qual o novo salário desta pessoa depois do aumento,
 * quanto foi o aumento e qual foi a porcentagem de
 * aumento.
 * Salário atual
 * Até R$ 1000.00                       -> Aumento 20%
 * Acima de R$ 1000.00 até R$ 3000.00   -> Aumento 15%
 * Acima de R$ 3000.00 até R$ 8000.00   -> Aumento 10%
 * Acima de R$ 8000.00                  -> Aumento 5%
 */
public class Aumento {
  /**
   * The entry point of application.
   *
   * @param args the input arguments
   */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite o salário da pessoa: ");
    final double actualSalary = sc.nextDouble();

    int percentage = 5;
    if (actualSalary <= 1000.00) {
      percentage = 20;
    } else if (actualSalary <= 3000.00) {
      percentage = 15;
    } else if (actualSalary <= 8000.00) {
      percentage = 10;
    }

    final double salaryIncrement = actualSalary * percentage / 100.00;
    final double newSalary = actualSalary + salaryIncrement;

    System.out.printf("Novo salário = R$ %.2f%n", newSalary);
    System.out.printf("Aumento = R$ %.2f%n", salaryIncrement);
    System.out.printf("Porcentagem = %d %%%n", percentage);

    sc.close();
  }
}