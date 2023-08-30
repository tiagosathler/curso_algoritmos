namespace Source.Estruturas.Condicional;

/**
 * Problema "baskara"
 * Fazer um programa para ler os três coeficientes de uma equação do segundo grau.
 * Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2
 * da equação com quatro casas decimais. Se a equação não possuir raízes reais,
 * mostrar uma mensagem.
 */

internal static class Baskara
{
    public static void Execute()
    {

        Console.Write("Coeficiente a: ");
        double a = double.Parse(Console.ReadLine()!);

        Console.Write("Coeficiente b: ");
        double b = double.Parse(Console.ReadLine()!);

        Console.Write("Coeficiente c: ");
        double c = double.Parse(Console.ReadLine()!);

        double delta = b * b - 4 * a * c;

        if (delta >= 0 && a != 0)
        {
            double x1 = (-b + Math.Sqrt(delta)) / (2 * a);
            double x2 = (-b - Math.Sqrt(delta)) / (2 * a);

            Console.WriteLine("X1 = {0:F4}", x1);
            Console.WriteLine("X2 = {0:F4}", x2);
        }
        else
        {
            Console.WriteLine("Esta equação não possui raízes reais");
        }
    }
}