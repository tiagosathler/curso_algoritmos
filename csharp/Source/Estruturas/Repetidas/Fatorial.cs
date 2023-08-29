namespace Source.Estruturas.Repetidas;

/**
 * Problema "fatorial"
 * Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
 * fatorial de N.
 */
internal static class Fatorial
{
    private static readonly short MIN_NUMBER = 0;
    private static readonly short MAX_NUMBER = 15;

    public static void Execute()
    {
        Console.Write("Digite o valor de N: ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_NUMBER || n > MAX_NUMBER ? MIN_NUMBER : n;

        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        Console.WriteLine($"FATORIAL DE {n} = {factorial}");
    }
}