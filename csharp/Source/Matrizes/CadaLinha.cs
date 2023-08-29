namespace Source.Matrizes;

/**
 * Problema "cada_linha"
 * Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10).
 * Mostrar qual o maior elemento de cada linha. Suponha não haver empates.
 */
internal static class CadaLinha
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static int ReadSize()
    {
        Console.Write($"Qual a ordem da matriz (máximo de {MAX_SIZE})? ");

        int n = int.Parse(Console.ReadLine()!);

        return n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;
    }

    private static int[,] ReadMatrix(int size)
    {
        int[,] matrix = new int[size, size];
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

    private static int[] GetHighestNumberPerRow(int[,] matrix)
    {
        int[] highestNumberPerRow = new int[matrix.GetLength(0)];

        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            highestNumberPerRow[i] = matrix[i, 0];
            for (int j = 1; j < matrix.GetLength(1); j++)
            {
                if (matrix[i, j] > highestNumberPerRow[i])
                {
                    highestNumberPerRow[i] = matrix[i, j];
                }
            }
        }
        return highestNumberPerRow;
    }

    private static void PrintHighestNumbers(int[] highestNumberPerRow)
    {
        Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");
        foreach (int highestNumber in highestNumberPerRow)
        {
            Console.WriteLine($"{highestNumber}");
        }
    }

    public static void Execute()
    {
        int n = ReadSize();

        int[,] matrix = ReadMatrix(n);

        int[] highestNumberPerRow = GetHighestNumberPerRow(matrix);

        PrintHighestNumbers(highestNumberPerRow);
    }
}