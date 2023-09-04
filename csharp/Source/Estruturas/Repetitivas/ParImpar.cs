namespace Source.Estruturas.Repetidas;

/**
 * Problema "par_impar"
 * Leia um valor inteiro N.
 * Este valor será a quantidade de números inteiros que serão lidos em seguida.
 * Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
 * se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
 * apenas NULO.
 */
internal static class ParImpar
{
    private static readonly short MIN_NUMBER = 1;
    private static readonly short MAX_NUMBER = 15;

    public static void Execute()
    {
        Console.Write("Quantos números você vai digitar? ");

        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_NUMBER || n > MAX_NUMBER ? MIN_NUMBER : n;

        int x;
        int parity;

        for (int i = 1; i <= n; i++)
        {
            Console.Write($"Rodada {i} de {n} - Digite um número: ");
            x = int.Parse(Console.ReadLine()!);

            parity = 0;

            if (x != 0)
            {
                parity = x % 2 + (2 * x + 1) % 2;
            }

            switch (parity)
            {
                case -2: { Console.WriteLine("ÍMPAR NEGATIVO"); break; }
                case -1: { Console.WriteLine("PAR NEGATIVO"); break; }
                case 0: { Console.WriteLine("NULO"); break; }
                case 1: { Console.WriteLine("PAR POSITIVO"); break; }
                case 2: { Console.WriteLine("ÍMPAR POSITIVO"); break; }
                default: { Console.WriteLine("OPS, ALGO SAIU ERRADO..."); break; }
            }
        }
    }
}