namespace Source.Estruturas.Repetidas;

/**
 * Problema "validacao_de_nota"
 * Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 * Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
 * (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada
 * separadamente.
 */
internal static class ValidacaoDeNota
{
    private static readonly short LOWER_BOUND = 0;
    private static readonly short UPPER_BOUND = 10;

    private static double readGrade()
    {
        double grade = double.Parse(Console.ReadLine()!);

        while (grade < LOWER_BOUND || grade > UPPER_BOUND)
        {
            Console.Write("Valor inválido! Tente novamente: ");
            grade = double.Parse(Console.ReadLine()!);
        }

        return grade;
    }


    public static void Execute()
    {
        double summation = 0.0;

        Console.Write("Digite a primeira nota: ");
        summation += readGrade();

        Console.Write("Digite a segunda nota: ");
        summation += readGrade();

        double average = summation / 2.0;
        Console.WriteLine("MÉDIA = {0:F2}", average);
    }
}