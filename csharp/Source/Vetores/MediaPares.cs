namespace Source.Vetores;

/**
 * Problema "media_pares"
 * Fazer um programa para ler um vetor de N números inteiros.
 * Em seguida, mostrar na tela a média aritmética somente dos números pares lidos,
 * com uma casa decimal.
 * Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR"
 */
internal static class MediaPares
{
    private static readonly int MIN_SIZE = 1;
    private static readonly int MAX_SIZE = 10;

    public static void Execute()
    {
        Console.Write($"Quantos valores vai ter cada vetor (máximo de {MAX_SIZE})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        int[] vector = new int[n];

        for (int i = 0; i < n; i++)
        {
            Console.Write($"Digite um número ({i + 1} de {n}): ");
            vector[i] = int.Parse(Console.ReadLine()!);
        }

        double averageOfEvenNumbers = 0;
        int evenNumberCount = 0;

        foreach (int v in vector)
        {
            if (v % 2 == 0 && v != 0)
            {
                averageOfEvenNumbers += v;
                evenNumberCount++;
            }
        }

        if (evenNumberCount > 0)
        {
            averageOfEvenNumbers /= evenNumberCount;
            Console.WriteLine($"MÉDIA DOS PARES = {averageOfEvenNumbers:F1}");
        }
        else
        {
            Console.WriteLine("NENHUM NÚMERO PAR!");
        }
    }
}