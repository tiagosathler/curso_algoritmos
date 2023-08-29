namespace Source.Estruturas.Repetidas;

/**
 * Problema "pares_consecutivos"
 * O programa deve ler um valor inteiro X indefinidas vezes.
 * (O programa irá parar quando o valor de X for igual a 0).
 * Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X,
 * inclusive o X, se for par. Se o valor de entrada for 4, por exemplo,
 * a saída deve ser 40, que é o resultado da operação:
 * 4+6+8+10+12, enquanto que se o valor de entrada for 11,
 * por exemplo, a saída deve ser 80, que é a soma de 12+14+16+18+20.
 */
internal static class ParesConsecutivos
{
    private static readonly short ITERATIONS = 5;

    public static void Execute()
    {
        int x = 1;
        int summation;

        while (x != 0)
        {
            Console.Write("Digite um número inteiro: ");
            x = int.Parse(Console.ReadLine()!);

            x += x % 2;
            summation = x;

            for (int i = 1; i < ITERATIONS && x != 0; i++)
            {
                x += 2;
                summation += x;
            }

            if (summation != 0)
            {
                Console.WriteLine("SOMA = {0:D}", summation);
            }
        }
    }
}