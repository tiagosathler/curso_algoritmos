namespace Source.Matrizes;

/**
 * Problema "soma_linhas"
 * Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
 * de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
 * seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
 */
internal static class SomaLinhas
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static int ReadSizeOf(string dimension)
    {
        Console.Write($"Quantas {dimension} vai ter cada matriz (máximo de {MAX_SIZE})? ");

        int d = int.Parse(Console.ReadLine()!);

        return d < MIN_SIZE || d > MAX_SIZE ? MIN_SIZE : d;
    }

    private static double[,] ReadMatrix(int rows, int columns)
    {
        double[,] matrix = new double[rows, columns];

        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            Console.WriteLine($"Digite os {columns} elementos da {i + 1}ª linha (de {rows} linhas):");
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                matrix[i, j] = double.Parse(Console.ReadLine()!);
            }
        }

        return matrix;
    }

    private static double[] GetSumOfRows(double[,] matrix)
    {
        double[] sumOfRows = new double[matrix.GetLength(0)];

        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            sumOfRows[i] = 0;
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                sumOfRows[i] += matrix[i, j];
            }
        }

        return sumOfRows;
    }

    private static void PrintSumOfRows(double[] rows)
    {
        Console.WriteLine("VETOR GERADO:");
        foreach (double value in rows)
        {
            Console.WriteLine($"{value:F1}");
        }
    }

    public static void Execute()
    {
        int rows = ReadSizeOf("linhas");
        int columns = ReadSizeOf("colunas");

        double[,] matrix = ReadMatrix(rows, columns);

        double[] sumOfRows = GetSumOfRows(matrix);

        PrintSumOfRows(sumOfRows);
    }
}