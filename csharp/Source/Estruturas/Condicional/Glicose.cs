namespace Source.Estruturas.Condicional;

/**
 * Problema "glicose"
 * Fazer um programa para ler a quantidade de glicose
 * no sangue de uma pessoa e depois mostrar na tela a
 * classificação desta glicose de acordo com a tabela de
 * referência abaixo:
 * |----------------------------------------------|
 * | Classificação  | Glicose                     |
 * |----------------------------------------------|
 * | Normal         | Até 100 mg/dl               |
 * | Elevado        | Maior que 100 até 140 mg/dl |
 * | Diabetes       | Maior de 140 mg/dl          |
 * |----------------------------------------------|.
 */

internal static class Glicose
{

    private static readonly double NORMAL_LEVEL = 100.0;

    private static readonly double HIGH_LEVEL = 140.0;

    public static void Execute()
    {
        Console.Write("Digite a medida da glicose: ");
        double glucoseLevel = double.Parse(Console.ReadLine()!);

        string classification = "diabetes";
        if (glucoseLevel <= NORMAL_LEVEL)
        {
            classification = "normal";
        }
        else if (glucoseLevel <= HIGH_LEVEL)
        {
            classification = "elevado";
        }

        Console.WriteLine("Classificação = {0}", classification);
    }
}