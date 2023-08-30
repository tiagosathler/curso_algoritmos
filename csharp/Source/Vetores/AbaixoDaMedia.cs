namespace Source.Vetores;

/**
 * Problema "abaixo_da_media"
 * Fazer um programa para ler um número inteiro N e depois um vetor de N números reais.
 * Em seguida, mostrar na tela a média aritmética de todos os elementos com três casas decimais.
 * Depois mostrar todos os elementos do vetor que estejam abaixo da média,
 * com uma casa decimal cada.
 */
internal static class AbaixoDaMedia
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    public static void Execute()
    {
        Console.Write($"Quantos valores vai ter cada vetor (máximo de {MAX_SIZE})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        double[] vector = new double[n];

        for (int i = 0; i < vector.Length; i++)
        {
            Console.Write($"Digite um número ({i + 1} de {vector.Length}): ");
            vector[i] = double.Parse(Console.ReadLine()!);
        }

        double average = 0.0;
        foreach (double v in vector)
        {
            average += v / n;
        }

        Console.WriteLine($"MÉDIA DO VETOR = {average:F3}");
        Console.WriteLine("ELEMENTOS ABAIXO DA MÉDIA:");

        foreach (double v in vector)
        {
            if (v < average)
            {
                Console.WriteLine($"{v:F1}");
            }
        }
    }
}