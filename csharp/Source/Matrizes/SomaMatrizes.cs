namespace Source.Matrizes;

/**
 * Problema "soma_matrizes"
 * Fazer um programa para ler duas matrizes de números inteiros A e B,
 * contendo de M linhas e N colunas cada (M e N máximo = 10).
 * Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
 * dos elementos correspondentes das matrizes originais.
 * Imprimir na tela a matriz gerada.
 */
internal static class SomaMatrizes
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static int ReadSizeOf(string dimension)
    {
        Console.Write($"Quantas {dimension} vai ter cada matriz (máximo de {MAX_SIZE})? ");

        int d = int.Parse(Console.ReadLine()!);

        return d < MIN_SIZE || d > MAX_SIZE ? MIN_SIZE : d;
    }

    private static int[,] ReadMatrixOf(int rows, int columns, char matrixLetter)
    {
        int[,] matrix = new int[rows, columns];

        Console.WriteLine($"Digite os valores da matriz {matrixLetter}");

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

    private static int[,] SumMatrix(int[,] matrixA, int[,] matrixB)
    {
        int rows = Math.Min(matrixA.GetLength(0), matrixB.GetLength(0));
        int columns = Math.Min(matrixA.GetLength(1), matrixB.GetLength(1));

        int[,] matrixC = new int[rows, columns];

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                matrixC[i, j] = matrixA[i, j] + matrixB[i, j];
            }
        }

        return matrixC;
    }

    private static void PrintMatrixSum(int[,] matrix)
    {
        Console.WriteLine("MATRIZ SOMA:");
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                Console.Write($"\t{matrix[i, j]}");
            }
            Console.WriteLine();
        }
    }

    public static void Execute()
    {
        int rows = ReadSizeOf("linhas");
        int columns = ReadSizeOf("colunas");

        int[,] matrixA = ReadMatrixOf(rows, columns, 'A');
        int[,] matrixB = ReadMatrixOf(rows, columns, 'B');

        int[,] matrixC = SumMatrix(matrixA, matrixB);

        PrintMatrixSum(matrixC);
    }
}