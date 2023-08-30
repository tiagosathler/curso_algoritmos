namespace Source.Estruturas.Repetidas;

/**
 * Problema "crescente"
 * Leia uma quantidade indeterminada de duplas de valores
 * inteiros X e Y. Escreva para cada X e Y uma
 * mensagem que indique se estes valores foram digitados
 * em ordem crescente ou decrescente. O programa deve
 * finalizar quando forem digitados dois valores iguais.
 */
internal static class Crescente
{

    public static void Execute()
    {
        int a;
        int b;

        do
        {
            Console.WriteLine("Digite dois números inteiros (a) e (b):");

            a = int.Parse(Console.ReadLine()!);
            b = int.Parse(Console.ReadLine()!);

            if (a > b)
            {
                Console.WriteLine("DECRESCENTE!");
            }
            else if (a < b)
            {
                Console.WriteLine("CRESCENTE!");
            }

        } while (a != b);

        Console.WriteLine("IGUAIS!");
    }
}