namespace Source.Estruturas.Condicional;

/**
 * Problema "operadora"
 * Uma operadora de telefonia cobra R$ 50.00 por um plano básico
 * que dá direito a 100 minutos de telefone.
 * Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00.
 * Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu,
 * daí mostrar o valor a ser pago.
 */

internal static class Operadora
{
    private static readonly short ALLOWANCE_MINUTES = 100;
    private static readonly double EXCESS_MINUTES_COST = 2.00;

    public static void Execute()
    {
        Console.Write("Digite a quantidade de minutos: ");
        int minutes = int.Parse(Console.ReadLine()!);

        double totalCost = 50.00;
        if (minutes > ALLOWANCE_MINUTES)
        {
            totalCost += (minutes - ALLOWANCE_MINUTES) * EXCESS_MINUTES_COST;
        }

        Console.WriteLine("VALOR A PAGAR = R$ {0:F2}", totalCost);
    }
}