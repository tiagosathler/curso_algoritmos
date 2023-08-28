namespace Source.Estruturas.Sequencial;

/**
 * Problema "troco"
 * Fazer um programa para calcular o troco no processo de pagamento de um produto
 * de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade
 * de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente
 * (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco
 * a ser devolvido ao cliente.
 */

internal static class Troco
{
    public static void Execute()
    {

        Console.Write("Preço unitário do produto: ");
        double price = double.Parse(Console.ReadLine()!);

        Console.Write("Quantidade comprada: ");
        int quantity = int.Parse(Console.ReadLine()!);

        Console.Write("Dinheiro recebido: ");
        double moneyReceived = double.Parse(Console.ReadLine()!);

        double change = moneyReceived - price * quantity;

        Console.WriteLine("TROCO = {0:F2}", change);
    }
}