namespace Source.Vetores;

/**
 * Problema "aprovados"
 * Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
 * no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
 * os nomes dos alunos aprovados, considerando aprovado aqueles cuja média das notas seja maior ou
 * igual a 6.0 (seis).
 */
internal static class Aprovados
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static readonly short NUM_OF_GRADES = 2;
    private static readonly short PASS_GRADE = 6;

    public static void Execute()
    {
        Console.Write($"Quantos pessoas você vai digitar (máximo de {MAX_SIZE:D})? ");

        int n = int.Parse(Console.ReadLine()!);
        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        Student[] students = new Student[n];

        for (int i = 0; i < students.Length; i++)
        {
            Console.WriteLine($"Dados da {i + 1}ª pessoa de {students.Length}:");

            Console.Write("Nome: ");
            students[i] = new Student(Console.ReadLine()!);

            for (int j = 0; j < students[i].GetGrades().Length; j++)
            {
                Console.Write($"{j + 1}ª nota: ");
                students[i].GetGrades()[j] = double.Parse(Console.ReadLine()!);
            }
        }

        for (int i = 0; i < students.Length; i++)
        {
            double average = 0.0;

            foreach (double grade in students[i].GetGrades())
            {
                average += grade / students[i].GetGrades().Length;
            }

            students[i].SetAverage(average);
        }

        int approvedStudents = 0;
        foreach (Student student in students)
        {
            if (student.GetAverage() >= PASS_GRADE)
            {
                approvedStudents++;
            }
        }

        if (approvedStudents > 0)
        {
            Console.WriteLine("ALUNOS APROVADOS:");

            foreach (Student student in students)
            {
                if (student.GetAverage() >= PASS_GRADE)
                {
                    Console.WriteLine($" - {student.GetName()}");
                }
            }
        }
        else
        {
            Console.WriteLine("NENHUM ALUNO FOI APROVADO!");
        }
    }

    private struct Student
    {
        private readonly string name;
        private double average;
        private readonly double[] grades = new double[NUM_OF_GRADES];

        public Student(string name)
        {
            this.name = name;
            average = 0.0;
        }

        public readonly string GetName()
        {
            return name;
        }

        public readonly double[] GetGrades()
        {
            return grades;
        }

        public void SetAverage(double average)
        {
            this.average = average;
        }

        public readonly double GetAverage()
        {
            return average;
        }
    }
}