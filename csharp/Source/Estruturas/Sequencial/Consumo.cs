namespace Source.Estruturas.Sequencial;

/**
 * Problema "consumo"
 * Fazer um programa para ler a distância total (em km)
 * percorrida por um carro, bem como o total de combustível
 * gasto por este carro ao percorrer tal distância.
 * Seu programa deve mostrar o consumo médio do carro, com três casas decimais.
 */

internal static class Consumo
{
    public static void Execute()
    {

        Console.Write("Distância percorrida: ");
        double distance = double.Parse(Console.ReadLine()!);

        Console.Write("Combustível gasto: ");
        double spentFuel = double.Parse(Console.ReadLine()!);

        double averageFuel = distance / spentFuel;
        Console.WriteLine("Consumo médio = {0:F3}", averageFuel);

    }
}