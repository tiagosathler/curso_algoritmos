namespace Source.Estruturas.Repetidas;

/**
 * Problema "media_idades"
 * Faça um programa para ler um número indeterminado de dados,
 * contendo cada um, a idade de um indivíduo.
 * O último dado, que não entrará nos cálculos,
 * contém um valor de idade negativa. Calcular
 * e imprimir a idade média deste grupo de indivíduos.
 * Se for entrado um valor negativo na primeira vez,
 * mostrar a mensagem "IMPOSSIVEL CALCULAR".
 */
internal static class MediaIdades
{

    public static void Execute()
    {
        Console.WriteLine("Digite as idades (negativo para sair):");
        int age = int.Parse(Console.ReadLine()!);

        int count = 0;
        int summation = 0;

        while (age >= 0)
        {
            count++;
            summation += age;
            age = int.Parse(Console.ReadLine()!);
        }

        if (count != 0)
        {
            double average = (double)summation / count;
            Console.WriteLine("MÉDIA = {0:F2}", average);
        }
        else
        {
            Console.WriteLine("IMPOSSÍVEL CALCULAR!");
        }
    }
}