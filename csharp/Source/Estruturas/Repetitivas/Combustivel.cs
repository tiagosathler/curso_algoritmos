namespace Source.Estruturas.Repetidas;

/**
 * Problema "combustivel"
 * Um posto de combustíveis deseja determinar qual de seus produtos
 * tem a preferência de seus clientes.
 * Escreva um algoritmo para ler o tipo de combustível abastecido
 * (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
 * Caso o usuário informe um código inválido (fora da faixa de 1 a
 * 4) deve ser solicitado um novo código (até que seja válido).
 * O programa será encerrado quando o código informado for o número 4,
 * devendo então mostrar a mensagem "MUITO OBRIGADO", bem
 * como as quantidades de cada combustível.
 */
internal static class Combustivel
{
    public static void Execute()
    {
        Console.WriteLine("Códigos:");
        Console.WriteLine("1 - álcool");
        Console.WriteLine("2 - gasolina");
        Console.WriteLine("3 - diesel");

        int alcohol = 0;
        int gasoline = 0;
        int diesel = 0;

        int option;
        do
        {
            Console.Write("Informe um código (1, 2, 3) ou 4 para parar: ");
            option = int.Parse(Console.ReadLine()!);

            switch (option)
            {
                case 1: { alcohol++; break; }
                case 2: { gasoline++; break; }
                case 3: { diesel++; break; }
                default: { break; }
            }
        } while (option != 4);

        Console.WriteLine("MUITO OBRIGADO");
        Console.WriteLine("  Álcool: {0:D}", alcohol);
        Console.WriteLine("Gasolina: {0:D}", gasoline);
        Console.WriteLine("  Diesel: {0:D}", diesel);
    }
}