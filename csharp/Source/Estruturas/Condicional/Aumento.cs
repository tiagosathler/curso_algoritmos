namespace Source.Estruturas.Condicional;

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

internal static class Aumento
{
    public static void Execute()
    {
        Console.Write("Digite o salário da pessoa: ");
        double actualSalary = double.Parse(Console.ReadLine()!);

        int percentage = 5;
        if (actualSalary <= 1000.00)
        {
            percentage = 20;
        }
        else if (actualSalary <= 3000.00)
        {
            percentage = 15;
        }
        else if (actualSalary <= 8000.00)
        {
            percentage = 10;
        }

        double salaryIncrement = actualSalary * percentage / 100.00;
        double newSalary = actualSalary + salaryIncrement;

        Console.WriteLine("Novo salário = R$ {0:F2}", newSalary);
        Console.WriteLine("Aumento = R$ {0:F2}", salaryIncrement);
        Console.WriteLine("Porcentagem = {0:D} %", percentage);
    }
}