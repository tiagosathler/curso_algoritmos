namespace Source.Estruturas.Repetidas;

/**
 * Problema "sequencia_impares"
 * Leia um valor inteiro X.
 * Em seguida mostre os ímpares de 1 até X, um valor por linha,
 * inclusive o X, se for o caso.
 */
internal static class SequenciaImpares
{

    public static void Execute()
    {
        Console.Write("Digite o valor de X (maior que 1): ");

        int x = int.Parse(Console.ReadLine()!);
        x = x <= 1 ? 2 : x;

        for (int i = 1; i <= x; i++)
        {
            if (i % 2 == 1)
            {
                Console.WriteLine($"{i}");
            }
        }
    }
}