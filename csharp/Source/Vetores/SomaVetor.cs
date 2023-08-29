namespace Source.Vetores;


/**
 * Problema "soma_vetor"
 * Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
 * - Imprimir todos os elementos do vetor
 * - Mostrar na tela a soma e a média dos elementos do vetor
 */
internal static class SomaVetor
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    public static void Execute()
    {
        Console.Write($"Quantos números você vai digitar (máximo de {MAX_SIZE})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        double[] vector = new double[n];

        for (int i = 0; i < vector.Length; i++)
        {
            Console.Write($"Digite um número ({i + 1} de {n}): ");
            vector[i] = double.Parse(Console.ReadLine()!);
        }

        double summation = 0.0;
        foreach (double v in vector)
        {
            summation += v;
        }

        double average = summation / n;

        Console.Write("VALORES = ");

        foreach (double v in vector)
        {
            Console.Write($"{v:F1} ");
        }

        Console.WriteLine($"\nSOMA = {summation:F2}");
        Console.WriteLine($"MÉDIA = {average:F2}");
    }
}