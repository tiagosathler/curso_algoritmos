namespace Source.Vetores;

/**
 * Problema "negativos"
 * Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
 * e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
 */

internal static class Negativos
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;


    public static void Execute()
    {
        Console.Write($"Quantos números você vai digitar (máximo de {MAX_SIZE})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        int[] vector = new int[n];

        for (int i = 0; i < vector.Length; i++)
        {
            Console.Write($"Digite um número ({i + 1} de {n}): ");
            vector[i] = int.Parse(Console.ReadLine()!);
        }

        Console.WriteLine("NÚMEROS NEGATIVOS:");

        foreach (int v in vector)
        {
            if (v < 0)
            {
                Console.WriteLine($"{v}");
            }
        }
    }
}