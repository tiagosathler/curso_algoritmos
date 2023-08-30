namespace Source.Estruturas.Sequencial;

/**
 * Problema "medidas"
 * Fazer um programa para ler três medidas A, B e C.
 * Em seguida, calcular e mostrar (imprimir os dados
 * com quatro casas decimais):
 * a) a área do quadrado que tem lado A
 * b) a área do triângulo retângulo que base A e altura B
 * c) a área do trapézio que tem bases A e B, e altura C
 */

internal static class Medidas
{
    public static void Execute()
    {

        Console.Write("Digite a medida A: ");
        double a = double.Parse(Console.ReadLine()!);

        Console.Write("Digite a medida B: ");
        double b = double.Parse(Console.ReadLine()!);

        Console.Write("Digite a medida C: ");
        double c = double.Parse(Console.ReadLine()!);

        double squareArea = a * a;
        double triangleArea = a * b / 2.0;
        double trapezeArea = ((a + b) * c) / 2.0;

        Console.WriteLine("ÁREA DO QUADRADO = {0:F4}", squareArea);
        Console.WriteLine("ÁREA DO TRIÂNGULO = {0:F4}", triangleArea);
        Console.WriteLine("ÁREA DO TRAPÉZIO = {0:F4}", trapezeArea);
    }
}