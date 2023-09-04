namespace Source.Estruturas.Repetidas;

/**
 * Problema "tabuada"
 * Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
 */
internal static class Tabuada
{

    public static void Execute()
    {
        Console.Write("Deseja a tabuada para qual valor? ");

        int n = int.Parse(Console.ReadLine()!);

        for (int i = 0; i <= 10; i++)
        {
            Console.WriteLine($"{i} x {n} = {i * n}");
        }
    }
}