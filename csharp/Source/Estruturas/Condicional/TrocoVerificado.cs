namespace Source.Estruturas.Condicional;

/**
 * Problema "troco_verificado"
 * Fazer um programa para calcular o troco no processo de pagamento
 * de um produto de uma mercearia.
 * O programa deve ler o preço unitário do produto,
 * a quantidade de unidades compradas deste produto,
 * e o valor em dinheiro dado pelo cliente.
 * Seu programa deve mostrar o valor do troco a ser devolvido
 * ao cliente.
 * Se o dinheiro dado pelo cliente não for suficiente,
 * mostrar uma mensagem informando o valor restante conforme exemplo.
 */

internal static class TrocoVerificado
{

    public static void Execute()
    {
        Console.Write("Preço unitário do produto: ");
        double price = double.Parse(Console.ReadLine()!);

        Console.Write("Quantidade comprada: ");
        int quantity = int.Parse(Console.ReadLine()!);

        Console.Write("Dinheiro recebido: ");
        double received = double.Parse(Console.ReadLine()!);

        double change = received - price * quantity;

        if (change >= 0)
        {
            Console.WriteLine("TROCO = R$ {0:F2}", change);
        }
        else
        {
            Console.WriteLine("DINHEIRO INSUFICIENTE. FALTAM R$ {0:F2}", -change);
        }
    }
}