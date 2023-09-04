namespace Source.Estruturas.Repetidas;

/**
 * Problema "media_ponderada"
 * Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir.
 * Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular
 * e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3
 * e o terceiro valor tem peso 5.
 * Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso,
 * dividida pela soma dos pesos.
 */
internal static class MediaPonderada
{
    private static readonly short MIN_NUMBER = 1;
    private static readonly short MAX_NUMBER = 15;


    public static void Execute()
    {
        Console.Write("Quantos casos você vai digitar? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_NUMBER || n > MAX_NUMBER ? MIN_NUMBER : n;

        double weightA = 2.0;
        double weightB = 3.0;
        double weightC = 5.0;

        for (int i = 0; i < n; i++)
        {
            Console.WriteLine($"\nCaso {i + 1} de {n}");
            Console.WriteLine("Digite os três números:");

            double a = double.Parse(Console.ReadLine()!);
            double b = double.Parse(Console.ReadLine()!);
            double c = double.Parse(Console.ReadLine()!);

            double average = (a * weightA + b * weightB + c * weightC) / (weightA + weightB + weightC);

            Console.WriteLine("MÉDIA PONDERADA = {0:F1}", average);
        }
    }
}