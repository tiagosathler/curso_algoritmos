using System.Drawing;

namespace Source.Matrizes;

/**
 * Problema "negativos_matriz"
 * Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros. Em
 * seguida, mostrar na tela somente os números negativos da matriz.
 */
internal static class NegativosMatriz
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static int ReadSizeOf(string dimension)
    {
        Console.Write($"Qual a quantidade de {dimension} da matriz (máximo de {MAX_SIZE})? ");

        int d = int.Parse(Console.ReadLine()!);

        return d < MIN_SIZE || d > MAX_SIZE ? MIN_SIZE : d;
    }


    private static int[,] ReadMatrix(int rows, int columns)
    {
        int[,] matrix = new int[rows, columns];
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                Console.Write($"Elemento [{i}, {j}]: ");
                matrix[i, j] = int.Parse(Console.ReadLine()!);
            }
        }
        return matrix;
    }

    private static void PrintNegativeElements(int[,] matrix)
    {
        Console.WriteLine("VALORES NEGATIVOS");
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                if (matrix[i, j] < 0)
                {
                    Console.WriteLine($"{matrix[i, j]}");
                }
            }
        }
    }


    public static void Execute()
    {
        int rows = ReadSizeOf("linhas");
        int columns = ReadSizeOf("colunas");

        int[,] matrix = ReadMatrix(rows, columns);

        PrintNegativeElements(matrix);
    }
}