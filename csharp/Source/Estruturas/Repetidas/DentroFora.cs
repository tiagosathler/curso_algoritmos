namespace Source.Estruturas.Repetidas;

/**
 * Problema "dentro_fora"
 * Leia um valor inteiro N.
 * Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
 * Mostre quantos destes valores X estão dentro do intervalo [10,20]
 * e quantos estão fora do intervalo.
 */
internal static class DentroFora
{
    private static readonly short LOWER_BOUND = 10;
    private static readonly short UPPER_BOUND = 20;
    private static readonly short MAX_NUMBERS = 10;

    public static void Execute()
    {
        Console.Write($"Quantos números você vai digitar (máximo {MAX_NUMBERS})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < 1 || n > MAX_NUMBERS ? 1 : n;

        int x;
        int insideCount = 0;
        int outsideCount = 0;

        for (int i = 0; i < n; i++)
        {
            Console.Write("Digite um número: ");
            x = int.Parse(Console.ReadLine()!);

            if (LOWER_BOUND <= x && x <= UPPER_BOUND)
            {
                insideCount++;
            }
            else
            {
                outsideCount++;
            }
        }

        Console.WriteLine($"{insideCount} DENTRO");
        Console.WriteLine($"{outsideCount} FORA");
    }
}