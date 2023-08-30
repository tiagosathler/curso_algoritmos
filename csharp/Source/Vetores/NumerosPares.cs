namespace Source.Vetores;

/**
 * Problema "numeros_pares"
 * Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
 * tela todos os números pares, e também a quantidade de números pares.
 */
internal static class NumerosPares
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

        Console.WriteLine("NÚMEROS PARES:");

        int quantity = 0;

        foreach (int v in vector)
        {
            if (v % 2 == 0 && v != 0)
            {
                Console.Write($"{v} ");
                quantity++;
            }
        }

        Console.WriteLine($"\nQUANTIDADE DE PARES = {quantity:D}");
    }
}