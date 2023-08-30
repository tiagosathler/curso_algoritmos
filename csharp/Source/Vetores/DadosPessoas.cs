namespace Source.Vetores;

/**
 * Problema "dados_pessoas"
 * Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas.
 * Fazer um programa que calcule e escreva a maior e a menor altura do grupo,
 * a média de altura das mulheres, e o número de homens.
 */
internal static class DadosPessoas
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static Person[] InputPerson(int size)
    {
        Person[] people = new Person[size];

        for (int i = 0; i < people.Length; i++)
        {
            Console.WriteLine($"Dados da {i + 1}ª pessoa de {size}:");
            Person person = new();

            Console.Write("Altura (m): ");
            person.height = double.Parse(Console.ReadLine()!);

            char gender;
            do
            {
                Console.Write("Gênero ('F/f' ou 'M/m'): ");
                gender = Console.ReadLine()!.ToUpper().ElementAt(0)!;
            } while (gender != 'M' && gender != 'F');

            person.gender = gender;
            people[i] = person;
        }

        return people;
    }

    private static Statistics GetStatistics(Person[] people)
    {
        int men = 0;
        int women = 0;

        double heightAverage = 0;
        double maleHeightAverage = 0;
        double femaleHeightAverage = 0;

        foreach (Person person in people)
        {
            heightAverage += person.height / people.Length;

            if (person.gender == 'M')
            {
                men++;
                maleHeightAverage += person.height;
            }
            else
            {
                women++;
                femaleHeightAverage += person.height;
            }
        }

        if (men > 0)
        {
            maleHeightAverage /= men;
        }

        if (women > 0)
        {
            femaleHeightAverage /= women;
        }

        double greaterHeight = people[0].height;
        char tallestPersonGender = people[0].gender;

        double shorterHeight = people[0].height;
        char shortestPersonGender = people[0].gender;

        foreach (Person person in people)
        {
            if (person.height > greaterHeight)
            {
                greaterHeight = person.height;
                tallestPersonGender = person.gender;
            }
            if (person.height < shorterHeight)
            {
                shorterHeight = person.height;
                shortestPersonGender = person.gender;
            }
        }
        return new Statistics(men, women, heightAverage, maleHeightAverage, femaleHeightAverage, greaterHeight, tallestPersonGender, shorterHeight, shortestPersonGender);
    }

    private static void PrintStatistics(Statistics s)
    {
        int total = s.Men + s.Women;

        Console.WriteLine($"\nAltura média geral: {s.HeightAverage:F2}m");

        Console.WriteLine($"\nMenor altura: {s.ShorterHeight:F2}m ('{s.ShortestPersonGender}')");

        Console.WriteLine($"\nMaior altura: {s.GreaterHeight:F2}m ('{s.TallestPersonGender}')");

        if (s.Men > 0)
        {
            double menPercentage = (double)100 * s.Men / total;
            Console.WriteLine($"\nQuantidade de homens: {s.Men} ({menPercentage:F1} %)");
            Console.WriteLine($"Média da altura dos homens: {s.MaleHeightAverage:F2}m");
        }
        else
        {
            Console.WriteLine("\nNÃO HÁ HOMENS!");
        }

        if (s.Women > 0)
        {
            double womenPercentage = (double)100 * s.Women / total;
            Console.WriteLine($"\nQuantidade de mulheres: {s.Women} ({womenPercentage:F1} %)");
            Console.WriteLine($"Média da altura dos mulheres: {s.FemaleHeightAverage:F2}m");
        }
        else
        {
            Console.WriteLine("\nNÃO HÁ MULHERES!");
        }
    }


    public static void Execute()
    {
        Console.Write($"Quantos pessoas serão digitadas (máximo de {MAX_SIZE})? ");

        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        Person[] people = InputPerson(n);

        PrintStatistics(GetStatistics(people));
    }

    private struct Person
    {
        public char gender;
        public double height;
    }

    private sealed record Statistics(
        int Men,
        int Women,
        double HeightAverage,
        double MaleHeightAverage,
        double FemaleHeightAverage,
        double GreaterHeight,
        char TallestPersonGender,
        double ShorterHeight,
        char ShortestPersonGender);
}