namespace Source.Estruturas.Condicional;

/**
 * Problema "tempo_de_jogo"
 * Leia a hora inicial e a hora const de um jogo.
 * A seguir calcule a duração do jogo, sabendo que o mesmo
 * pode começar em um dia e terminar em outro, tendo uma
 * duração mínima de 1 hora e máxima de 24 horas.
 */

internal static class TempoDeJogo
{
    public static void Execute()
    {
        Console.Write("Hora inicial: ");
        int start = int.Parse(Console.ReadLine()!);

        Console.Write("Hora const: ");
        int end = int.Parse(Console.ReadLine()!);

        int duration = end > start ? end - start : 24 - (start - end);

        Console.WriteLine("O JOGO DUROU {0:D} HORA(S)", duration);
    }

}