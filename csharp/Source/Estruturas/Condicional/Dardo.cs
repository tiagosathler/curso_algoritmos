namespace Source.Estruturas.Condicional;

/**
 * Problema "dardo"
 * No arremesso de dardo, o atleta tem três chances para lançar o dardo
 * à maior distância que conseguir. Você deve criar um programa para,
 * dadas as medidas das três tentativas de lançamento, informar qual
 * foi a maior.
 */

internal static class Dardo
{
    public static void Execute()
    {
        Console.WriteLine("Digite as três distâncias:");

        double a = double.Parse(Console.ReadLine()!);
        double b = double.Parse(Console.ReadLine()!);
        double c = double.Parse(Console.ReadLine()!);

        double greatest = c;
        if (a >= b && a >= c)
        {
            greatest = a;
        }
        else if (b >= c)
        {
            greatest = b;
        }

        Console.WriteLine("MAIOR DISTÂNCIA = {0:F2}", greatest);
    }
}