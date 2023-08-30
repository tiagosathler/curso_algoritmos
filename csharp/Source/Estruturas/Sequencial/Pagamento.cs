namespace Source.Estruturas.Sequencial;

/**
 * Problema "pagamento"
 * Fazer um programa para ler o nome de um(a) funcionário(a),
 * o valor que ele(a) recebe por hora, e a quantidade de horas
 * trabalhadas por ele(a).
 * Ao const, mostrar o valor do pagamento do funcionário com
 * uma mensagem explicativa
 */

internal static class Pagamento
{
    public static void Execute()
    {
        Console.Write("Nome: ");
        string name = Console.ReadLine()!;


        Console.Write("Valor por hora: ");
        double valuePerHour = double.Parse(Console.ReadLine()!);


        Console.Write("Horas trabalhadas: ");
        int workedHours = int.Parse(Console.ReadLine()!);

        double payment = valuePerHour * workedHours;

        Console.WriteLine("O pagamento para {0} deve ser de R$ {1:F2}", name, payment);
    }
}