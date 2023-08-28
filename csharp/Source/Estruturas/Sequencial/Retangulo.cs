namespace Source.Estruturas.Sequencial;

/**
 * Problema "retangulo"
 * Fazer um programa para ler as medidas da base e altura de um retângulo.
 * Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo,
 * com quatro casas decimais,
 */

internal static class Retangulo
{
    static public void Execute()
    {
        Console.Write("Base do triângulo: ");
        double baseLength = double.Parse(Console.ReadLine()!);

        Console.Write("Altura do triângulo: ");
        double height = double.Parse(Console.ReadLine()!);

        double area = height * baseLength;
        double perimeter = 2 * (baseLength + height);
        double diagonal = Math.Sqrt(Math.Pow(baseLength, 2.0) + height * height);

        Console.WriteLine("ÁREA = {0:F4}\n", area);
        Console.WriteLine("PERÍMETRO = {0:F4}\n", perimeter);
        Console.WriteLine("DIAGONAL = {0:F4}\n", diagonal);
    }
}