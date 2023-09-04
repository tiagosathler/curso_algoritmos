namespace Source.Estruturas.Repetidas;

/**
 * Problema "divisao"
 * Escreva um algoritmo que leia dois números e imprima
 * o resultado da divisão do primeiro pelo segundo.
 * Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”
 */
internal static class Divisao
{
    private static readonly short MAX_NUMBERS = 10;

    public static void Execute()
    {
        Console.Write($"Quantos casos você vai digitar (máximo de {MAX_NUMBERS}? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < 1 || n > MAX_NUMBERS ? 1 : n;

        for (int i = 0; i < n; i++)
        {
            Console.WriteLine($"\nCaso {i + 1} de {n}");

            Console.Write("Entre com o numerador: ");
            int numerator = int.Parse(Console.ReadLine()!);

            Console.Write("Entre com denominador: ");
            int denominator = int.Parse(Console.ReadLine()!);

            if (denominator != 0)
            {
                double division = (double)numerator / denominator;
                Console.WriteLine("DIVISÃO = {0:F2}", division);
            }
            else
            {
                Console.WriteLine("DIVISÃO IMPOSSÍVEL");
            }
        }
    }
}