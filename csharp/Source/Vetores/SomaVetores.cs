namespace Source.Vetores;

/**
 * Problema "soma_vetores"
 * Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
 * terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
 * o vetor C gerado.
 */
internal static class SomaVetores
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static int[] ReadVector(int size, char vectorName)
    {
        Console.WriteLine($"Digite os {size} valores do vetor {vectorName}:");

        int[] vector = new int[size];

        for (int i = 0; i < size; i++)
        {
            vector[i] = int.Parse(Console.ReadLine()!);
        }

        return vector;
    }

    private static int[] SumVectors(int[] vectorA, int[] vectorB)
    {
        int size = Math.Min(vectorA.Length, vectorB.Length);

        int[] sumVector = new int[size];

        for (int i = 0; i < size; i++)
        {
            sumVector[i] = vectorA[i] + vectorB[i];
        }

        return sumVector;
    }

    private static void PrintResult(int[] vector)
    {
        Console.WriteLine("VETOR RESULTANTE:");
        foreach (int v in vector)
        {
            Console.WriteLine($"{v}");
        }
    }

    public static void Execute()
    {
        Console.Write($"Quantos valores vai ter cada vetor (máximo de {MAX_SIZE})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        int[] vectorA = ReadVector(n, 'A');
        int[] vectorB = ReadVector(n, 'B');

        int[] vectorC = SumVectors(vectorA, vectorB);

        PrintResult(vectorC);
    }
}