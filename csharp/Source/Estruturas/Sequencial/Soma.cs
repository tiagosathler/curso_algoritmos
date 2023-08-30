namespace Source.Estruturas.Sequencial;

/**
 * Problema "soma"
 * Fazer um programa para ler dois valores inteiros X e Y,
 * e depois mostrar na tela o valor da soma destes números.
 */

internal static class Soma
{
    /**
     * The entry point of application.
     *
     * @param args the input arguments
     */
    public static void Execute()
    {

        Console.Write("Digite o valor de X: ");
        int x = int.Parse(Console.ReadLine()!);

        Console.Write("Digite o valor de Y: ");
        int y = int.Parse(Console.ReadLine()!);

        int summation = x + y;

        Console.WriteLine("SOMA = {0:D}", summation);
    }
}