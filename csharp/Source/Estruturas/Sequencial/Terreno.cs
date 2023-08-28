/**
 * Problema "terreno"
 * Fazer um programa para ler as medidas da largura e
 * comprimento de um terreno retangular com uma casa decimal,
 * bem como o valor do metro quadrado do terreno com duas casas decimais.
 * Em seguida, o programa deve mostrar o valor da área do terreno,
 * bem como o valor do preço do terreno, ambos com duas casas decimais.
 */
namespace Source.Estruturas.Sequencial;

internal static class Terreno
{

    public static void Execute()
    {
        Console.Write("Digite a largura do terreno: ");
        double width = double.Parse(Console.ReadLine()!);

        Console.Write("Digite o comprimento do terreno: ");
        double length = double.Parse(Console.ReadLine()!);

        Console.Write("Digite o valor do metro quadrado: ");
        double squareMeterValue = double.Parse(Console.ReadLine()!);

        double area = width * length;
        double price = squareMeterValue * area;

        Console.WriteLine("Área do terreno: {0:F2}\n", area);
        Console.WriteLine("Preço do terreno: {0:F2}\n", price);
    }
}