namespace Source.Estruturas.Repetidas;

/**
 * Problema "quadrante"
 * Escreva um programa para ler as coordenadas (X,Y)
 * de uma quantidade indeterminada de pontos no
 * sistema cartesiano. Para cada ponto escrever
 * o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
 * O algoritmo será encerrado quando pelo menos
 * uma de duas coordenadas for NULA (nesta situação sem
 * escrever mensagem alguma).
 *     y
 * Q2  |  Q1
 * --------- x
 * Q3  |  Q4
 */
internal static class Quadrante
{

    public static void Execute()
    {
        int x;
        int y;

        do
        {
            Console.WriteLine("\nDigite os valores das coordenadas X e Y:");

            x = int.Parse(Console.ReadLine()!);
            y = int.Parse(Console.ReadLine()!);

            if (x > 0 && y > 0)
            {
                Console.WriteLine("QUADRANTE Q1");
            }
            else if (x < 0 && y > 0)
            {
                Console.WriteLine("QUADRANTE Q2");
            }
            else if (x < 0 && y < 0)
            {
                Console.WriteLine("QUADRANTE Q3");
            }
            else if (x > 0 && y < 0)
            {
                Console.WriteLine("QUADRANTE Q4");
            }

        } while (x != 0 && y != 0);
    }
}