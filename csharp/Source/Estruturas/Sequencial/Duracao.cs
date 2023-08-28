namespace Source.Estruturas.Sequencial;

/**
 * Problema "duracao"
 * Fazer um programa para ler uma duração de tempo em segundos,
 * daí imprimir na tela esta duração no formato: horas:minutos:segundos.
 */

internal static class Duracao
{
    public static void Execute()
    {

        Console.Write("Digite a duração em segundos: ");
        int duration = int.Parse(Console.ReadLine()!);

        int hours = duration / 3600;
        int minutes = duration % 3600 / 60;
        int seconds = (duration % 3600) % 60;

        Console.WriteLine("{0:D} : {1:D2} : {2:D2}", hours, minutes, seconds);
    }
}