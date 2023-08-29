namespace Source.Vetores;

/**
 * Problema "mais_velho"
 * Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades.
 * Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor.
 * Depois, mostrar na tela o nome da pessoa mais velha.
 */
internal static class MaisVelho
{
    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    public static void Execute()
    {
        Console.Write("Quantos pessoas você vai digitar (máximo de 10)? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        int[] ages = new int[n];
        string[] names = new string[n];

        for (int i = 0; i < n; i++)
        {
            Console.WriteLine($"Dados da {i + 1}ª pessoa de {n}:");

            Console.Write("Nome: ");
            names[i] = Console.ReadLine()!;

            Console.Write("Idade: ");
            ages[i] = int.Parse(Console.ReadLine()!);
        }

        int olderAgeIndex = 0;
        int olderAge = ages[olderAgeIndex];

        for (int i = 1; i < n; i++)
        {
            if (ages[i] > olderAge)
            {
                olderAge = ages[i];
                olderAgeIndex = i;
            }
        }

        Console.WriteLine($"Pessoa mais velha: {names[olderAgeIndex]}");
    }
}