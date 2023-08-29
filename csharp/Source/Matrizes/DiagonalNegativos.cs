namespace Source.Matrizes;

/**
 * Problema "diagonal_negativos"
 * Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 * contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de
 * valores
 * negativos da matriz.
 */
internal static class DiagonalNegativos
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

    private static int[] GetDiagonal(int[,] matrix)
    {
        int[] diagonal = new int[matrix.GetLength(0)];
        for (int i = 0; i < matrix.GetLength(1); i++)
        {
            diagonal[i] = matrix[i, i];
        }
        return diagonal;
    }

    private static int GetNegatives(int[,] matrix)
    {
        int count = 0;
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                if (matrix[i, j] < 0)
                {
                    count++;
                }
            }
        }
        return count;
    }

    private static void PrintDiagonal(int[] diagonal)
    {
        Console.WriteLine("DIAGONAL PRINCIPAL:");
        foreach (int element in diagonal)
        {
            Console.Write($"{element} ");
        }
        Console.WriteLine();
    }

    private static void PrintNegatives(int negativeount)
    {
        Console.WriteLine($"QUANTIDADE DE NEGATIVOS = {negativeount}");
    }

    public static void Execute()
    {
        int n = ReadSize();

        int[,] matrix = ReadMatrix(n);

        int[] diagonal = GetDiagonal(matrix);

        int negativeount = GetNegatives(matrix);

        PrintDiagonal(diagonal);

        PrintNegatives(negativeount);
    }
}