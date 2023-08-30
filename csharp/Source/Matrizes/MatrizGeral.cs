namespace Source.Matrizes;

/**
 * Problema "matriz_geral"
 * Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
 * Em seguida, fazer as seguintes ações:
 * a) calcular e imprimir a soma de todos os elementos positivos da matriz.
 * b) fazer a leitura do índice de uma linha da matriz e,
 * daí, imprimir todos os elementos desta linha.
 * c) fazer a leitura do índice de uma coluna da matriz e,
 * daí, imprimir todos os elementos desta coluna.
 * d) imprimir os elementos da diagonal principal da matriz.
 * e) alterar a matriz elevando ao quadrado todos os números negativos da mesma.
 * Em seguida imprimir a matriz alterada.
 */
internal static class MatrizGeral
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static int ReadSize()
    {
        Console.Write($"Qual a ordem da matriz (máximo de {MAX_SIZE})? ");

        int n = int.Parse(Console.ReadLine()!);

        return n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;
    }

    private static double[,] ReadMatrix(int size)
    {
        double[,] matrix = new double[size, size];
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                Console.Write($"Elemento [{i}, {j}]: ");
                matrix[i, j] = double.Parse(Console.ReadLine()!);
            }
        }
        return matrix;
    }

    private static void CalculateAndPrintSumOfPositiveElementsOf(double[,] matrix)
    {
        double summation = 0;

        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                if (matrix[i, j] > 0)
                {
                    summation += matrix[i, j];
                }
            }
        }

        Console.WriteLine($"\nSOMA DOS POSITIVOS: {summation:F1}");
    }

    private static int GetIndexOfDimension(Dimension dimension, int size)
    {
        int index = 0;

        bool indexIsValid = false;

        while (!indexIsValid)
        {
            switch (dimension)
            {
                case Dimension.ROW: { Console.Write("\nEscolha uma linha: "); break; }
                case Dimension.COLUMN: { Console.Write("\nEscolha uma coluna: "); break; }
            }

            index = int.Parse(Console.ReadLine()!);

            indexIsValid = index >= 0 && index < size;

            if (!indexIsValid)
            {
                Console.WriteLine($"VALOR FORA DA FAIXA (de 0 a {size - 1})! ESCOLHA NOVAMENTE!");
            }
        }

        return index;
    }

    private static void PrintElementsOfDimension(Dimension dimension, int index, double[,] matrix)
    {
        switch (dimension)
        {
            case Dimension.ROW:
                {
                    if (index < matrix.GetLength(0))
                    {
                        Console.Write($"LINHA ESCOLHIDA ({index}): ");
                        for (int j = 0; j < matrix.GetLength(1); j++)
                        {
                            Console.Write($"\t{matrix[index, j]:F1}");
                        }
                    }
                    break;
                }
            case Dimension.COLUMN:
                {
                    if (index < matrix.GetLength(1))
                    {
                        Console.Write($"COLUNA ESCOLHIDA ({index}): ");
                        for (int i = 0; i < matrix.GetLength(0); i++)
                        {
                            Console.Write($"\t{matrix[i, index]:F1}");
                        }
                    }
                    break;
                }
        }
        Console.WriteLine();
    }

    private static void PrintDiagonal(double[,] matrix)
    {
        Console.WriteLine();
        Console.Write("DIAGONAL PRINCIPAL: ");
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            Console.Write($"\t{matrix[i, i]:F1}");
        }
        Console.WriteLine();
    }

    private static void SquareTheNegativeElementsOf(double[,] matrix)
    {
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                if (matrix[i, j] < 0)
                {
                    matrix[i, j] *= matrix[i, j];
                }
            }
        }
    }

    private static void PrintMatrix(double[,] matrix)
    {
        Console.WriteLine("\nMATRIZ ALTERADA:");
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                Console.Write($"\t{matrix[i, j]:F1}");
            }
            Console.WriteLine();
        }
        Console.WriteLine();
    }


    public static void Execute()
    {
        int n = ReadSize();

        double[,] matrix = ReadMatrix(n);

        CalculateAndPrintSumOfPositiveElementsOf(matrix);

        int row = GetIndexOfDimension(Dimension.ROW, matrix.GetLength(0));
        PrintElementsOfDimension(Dimension.ROW, row, matrix);

        int column = GetIndexOfDimension(Dimension.COLUMN, matrix.GetLength(0));
        PrintElementsOfDimension(Dimension.COLUMN, column, matrix);

        PrintDiagonal(matrix);

        SquareTheNegativeElementsOf(matrix);

        PrintMatrix(matrix);
    }

    private enum Dimension
    {
        ROW,
        COLUMN,
    }
}