namespace Source.Estruturas.Repetidas;

/**
 * Problema "soma_impares"
 * Leia 2 valores inteiros X e Y (em qualquer ordem).
 * A seguir, calcule e mostre a soma dos números impares
 * entre eles.
 */
internal static class SomaImpares
{
    public static void Execute()
    {
        Console.WriteLine("Digite dois números inteiros ('x' e 'y'): ");
        int x = int.Parse(Console.ReadLine()!);
        int y = int.Parse(Console.ReadLine()!);

        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        int summation = 0;
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 == 1 || i % 2 == -1)
            {
                summation += i;
            }
        }

        Console.WriteLine($"SOMA DOS ÍMPARES = {summation}");
    }
}