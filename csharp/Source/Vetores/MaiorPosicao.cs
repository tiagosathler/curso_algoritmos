namespace Source.Vetores;

/**
 * Problema "maior_posicao"
 * Faça um programa que leia N números reais positivos e armazene-os em um vetor.
 * Em seguida, mostrar na tela o maior número do vetor (supor não haver empates).
 * Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero).
 */
internal static class MaiorPosicao
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
            Console.Write($"Digite um número ({i + 1} de {n}): ", i + 1, n);
            vector[i] = double.Parse(Console.ReadLine()!);
        }

        int position = 0;
        double biggestNumber = vector[position];

        for (int i = 1; i < vector.Length; i++)
        {
            if (vector[i] > biggestNumber)
            {
                biggestNumber = vector[i];
                position = i;
            }
        }

        Console.WriteLine($"MAIOR VALOR = {biggestNumber:F1}");
        Console.WriteLine($"POSIÇÃO DO MAIOR VALOR = {position:D}");
    }
}