namespace Source.Estruturas.Sequencial;

/**
 * Problema "circulo"
 * Fazer um programa para ler o valor "r" do raio de um círculo,
 * e depois mostrar o valor da área do círculo com três casas decimais.
 * A fórmula da área do círculo é a seguinte: area = 𝜋. 𝑟. Você pode
 * usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação,
 * ou então, se preferir, use diretamente o valor 3.14159.
 */

internal static class Circulo
{
    public static void Execute()
    {

        Console.Write("Digite o valor do raio do circulo: ");
        double radius = double.Parse(Console.ReadLine()!);

        double area = Math.PI * Math.Pow(radius, 2.0);

        Console.WriteLine("AREA = {0:F3}", area);
    }
}