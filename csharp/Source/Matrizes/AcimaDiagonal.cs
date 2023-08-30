namespace Source.Matrizes;

/**
 * Problema "acima_diagonal"
 * Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 * contendo números inteiros. Mostrar a soma dos elementos acima da
 * diagonal principal.
 */
internal static class AcimaDiagonal
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

    private static int CalculateSumOfElementsAboveDiagonal(int[,] matrix)
    {
        int summation = 0;

        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = i + 1; j < matrix.GetLength(1); j++)
            {
                summation += matrix[i, j];
            }
        }

        return summation;
    }

    private static void PrintSummation(int summation)
    {
        Console.WriteLine($"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {summation}");
    }

    public static void Execute()
    {
        int n = ReadSize();
        int[,] matrix = ReadMatrix(n);

        int summation = CalculateSumOfElementsAboveDiagonal(matrix);

        PrintSummation(summation);
    }
}