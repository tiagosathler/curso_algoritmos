namespace Source.Estruturas.Condicional;

/**
 * Problema "menor_de_tres"
 * Fazer um programa para ler três números inteiros.
 * Em seguida, mostrar qual o menor dentre os três
 * números lidos.
 * Em caso de empate, mostrar apenas uma vez.
 */

internal static class MenorDeTres
{
    public static void Execute()
    {
        Console.Write("Primeiro valor (a): ");
        int a = int.Parse(Console.ReadLine()!);

        Console.Write("Segundo valor (b): ");
        int b = int.Parse(Console.ReadLine()!);

        Console.Write("Terceiro valor (c): ");
        int c = int.Parse(Console.ReadLine()!);

        int smallest = c;
        if (a <= b && a <= c)
        {
            smallest = a;
        }
        else if (b <= c)
        {
            smallest = b;
        }

        Console.WriteLine("MENOR = {0:D}", smallest);
}
}