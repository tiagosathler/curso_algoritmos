namespace Source.Vetores;

/**
 * Problema "alturas"
 * Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
 * tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
 * bem como os nomes dessas pessoas caso houver.
 */
internal static class Alturas
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;
    private static readonly short MINOR = 16;

    private struct Person
    {
        public string name;
        public int age;
        public double height;

        public Person(string name, int age, double height)
        {
            this.name = name;
            this.age = age;
            this.height = height;
        }
    }

    public static void Execute()
    {
        Console.Write($"Quantos pessoas serão digitadas (máximo de {MAX_SIZE})? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        Person[] people = new Person[n];

        for (int i = 0; i < people.Length; i++)
        {
            Console.WriteLine($"Dados da {i + 1}ª pessoa de {n}:");

            Console.Write("Nome: ");
            string name = Console.ReadLine()!;

            Console.Write("Idade: ");
            int age = int.Parse(Console.ReadLine()!);

            Console.Write("Altura: ");
            double height = double.Parse(Console.ReadLine()!);

            people[i] = new Person(name, age, height);
        }

        double heightAverage = 0.0;
        foreach (Person p in people)
        {
            heightAverage += p.height / n;
        }

        double perMinors = 0.0;
        foreach (Person p in people)
        {
            if (p.age < MINOR)
            {
                perMinors += (double)100 / n;
            }
        }

        Console.WriteLine($"Altura média: {heightAverage:F2}");

        Console.WriteLine($"Pessoas com menos de {MINOR} anos: {perMinors:F1} %");

        foreach (Person p in people)
        {
            if (p.age < MINOR)
            {
                Console.WriteLine($"- {p.name}");
            }
        }
        Console.WriteLine();
    }
}