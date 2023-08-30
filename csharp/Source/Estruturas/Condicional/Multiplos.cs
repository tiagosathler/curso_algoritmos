namespace Source.Estruturas.Condicional;

/**
 * Problema "multiplos"
 * Fazer um programa para ler dois números inteiros,
 * e dizer se um número é múltiplo do outro.
 * Os números podem ser digitados em qualquer ordem.
 */

internal static class Multiplos
{
    public static void Execute()
    {
        Console.WriteLine("Digite dois números inteiros:");

        int a = int.Parse(Console.ReadLine()!);
        int b = int.Parse(Console.ReadLine()!);

        if (a != 0 && b != 0 && (a % b == 0 || b % a == 0))
        {
            Console.WriteLine("São múltiplos");
        }
        else
        {
            Console.WriteLine("Não são múltiplos");
        }
    }
}