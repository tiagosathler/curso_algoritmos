namespace Source.Estruturas.Condicional;

/**
 * Problema "coordenadas"
 * Leia os valores das coordenadas X e Y de um ponto no plano
 * cartesiano. A seguir, determine qual o quadrante ao qual pertence o
 * ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
 * mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
 * “Eixo X” ou “Eixo Y”, conforme for a situação.
 * y
 * Q2  |  Q1
 * --------- x
 * Q3  |  Q4
 */

internal static class Coordenadas
{
    public static void Execute()
    {
        Console.Write("Valor de X: ");
        double x = double.Parse(Console.ReadLine()!);

        Console.Write("Valor de Y: ");
        double y = double.Parse(Console.ReadLine()!);

        string quadrant = "Origem";
        if (x > 0 && y > 0)
        {
            quadrant = "Q1";
        }
        else if (x < 0 && y > 0)
        {
            quadrant = "Q2";
        }
        else if (x < 0 && y < 0)
        {
            quadrant = "Q3";
        }
        else if (x > 0 && y < 0)
        {
            quadrant = "Q4";
        }
        else if (x == 0 && y != 0)
        {
            quadrant = "Eixo Y";
        }
        else if (x != 0)
        {
            quadrant = "Eixo X";
        }

        Console.WriteLine($"{quadrant}");
    }
}