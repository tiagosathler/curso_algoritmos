namespace Source.Estruturas.Condicional;

/**
 * Problema "notas"
 * Fazer um programa para ler as duas notas que um aluno obteve
 * no primeiro e segundo semestres de uma disciplina anual.
 * Em seguida, mostrar a nota const que o aluno obteve (com uma casa decimal)
 * no ano juntamente com um texto explicativo.
 * Caso a nota const do aluno seja inferior a 60,00,
 * mostrar a mensagem "REPROVADO", conforme exemplos.
 */

internal static class Notas
{
    private static readonly double GRADE_CRITERIA = 60.0;

    public static void Execute()
    {

        Console.Write("Digite a primeira nota: ");
        double gradeA = double.Parse(Console.ReadLine()!);

        Console.Write("Digite a segunda nota: ");
        double gradeB = double.Parse(Console.ReadLine()!);

        double constGrade = gradeA + gradeB;

        Console.WriteLine("NOTAL const = {0:F1}", constGrade);

        if (constGrade >= GRADE_CRITERIA)
        {
            Console.WriteLine("APROVADO!");
        }
        else
        {
            Console.WriteLine("REPROVADO!");
        }
    }

}