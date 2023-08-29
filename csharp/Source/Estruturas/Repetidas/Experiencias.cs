namespace Source.Estruturas.Repetidas;

/**
 * Problema "experiencias"
 * Maria acabou de iniciar seu curso de graduação na faculdade de medicina
 * e precisa de sua ajuda para organizar os experimentos de um laboratório
 * o qual ela é responsável.
 * Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório
 * e o percentual de cada tipo de cobaia utilizada.
 * Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos.
 * Para obter estas informações, ela sabe exatamente o número de experimentos
 * que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas
 * em cada experimento.
 * Faça um programa que leia um valor inteiro N que indica os vários casos de teste
 * que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade
 * de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
 * de cobaia (R:Rato S:Sapo C:Coelho).
 * Apresente o total de cobaias utilizadas, o total de cada tipo de
 * cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas,
 * sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
 */
internal static class Experiencias
{
    private static readonly short MIN_CASES = 1;
    private static readonly short MAX_CASES = 15;

    private const string MICE_KEY = "R";
    private const string MICE_NAME = "ratos";

    private const string FROGS_KEY = "S";
    private const string FROGS_NAME = "sapos";

    private const string RABBITS_KEY = "C";
    private const string RABBITS_NAME = "coelhos";

    private const string KEY = "KEY";
    private const string NAME = "NAME";

    private static Dictionary<string, string> InputChoice()
    {
        Dictionary<string, string> animalKeyAndName = new Dictionary<string, string>();

        string message = $"Tipo de cobaia: " +
            $"({MICE_NAME.ToUpper()[..1]}){MICE_NAME.ToLower()[1..]}, " +
            $"({FROGS_NAME.ToUpper()[..1]}){FROGS_NAME.ToLower()[1..]}, " +
            $"({RABBITS_NAME.ToUpper()[..1]}){RABBITS_NAME.ToLower()[1..]}: ";

        Console.Write(message);
        string key = Console.ReadLine()!.ToUpper()[..1];

        switch (key)
        {
            case MICE_KEY:
                {
                    animalKeyAndName.Add(KEY, MICE_KEY);
                    animalKeyAndName.Add(NAME, MICE_NAME);
                    break;
                }
            case FROGS_KEY:
                {
                    animalKeyAndName.Add(KEY, FROGS_KEY);
                    animalKeyAndName.Add(NAME, FROGS_NAME);
                    break;

                }
            case RABBITS_KEY:
                {
                    animalKeyAndName.Add(KEY, RABBITS_KEY);
                    animalKeyAndName.Add(NAME, RABBITS_NAME);
                    break;

                }
            default: { Console.WriteLine("Opção inválida! Tente novamente."); break; }
        }

        return animalKeyAndName;
    }

    private static bool InputAnimalQuantity(Dictionary<string, string> animalKeyAndName, Dictionary<string, int> animalsCount)
    {
        string key = animalKeyAndName[KEY];
        string name = animalKeyAndName[NAME];

        Console.Write($"Digite a quantidade de {name}: ");
        int quantity = int.Parse(Console.ReadLine()!);

        if (quantity <= 0)
        {
            Console.WriteLine("Quantidade inválida (menor que 0)! Tente novamente.");
            return false;
        }

        animalsCount[key] += quantity;

        return true;
    }

    private static void PrintReport(Dictionary<string, int> animalsCount)
    {
        int mice = animalsCount[MICE_KEY];
        int frogs = animalsCount[FROGS_KEY];
        int rabbits = animalsCount[RABBITS_KEY];

        int total = mice + frogs + rabbits;

        double perMice = 100.0 * mice / total;
        double perFrogs = 100.0 * frogs / total;
        double perRabbits = 100.0 * rabbits / total;

        Console.WriteLine("\nRELATÓRIO FINAL:");
        Console.WriteLine($"Total: {total} cobaias\n");
        Console.WriteLine($"Total de {RABBITS_NAME.ToLower()}: {rabbits} ({perRabbits:F2} %)");
        Console.WriteLine($"Total de {MICE_NAME.ToLower()}: {mice} ({perMice:F2} %)");
        Console.WriteLine($"Total de {FROGS_NAME.ToLower()}: {frogs} ({perFrogs:F2} %)");
    }


    public static void Execute()
    {
        Console.Write("Quantos casos de teste serão digitados? ");
        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_CASES || n > MAX_CASES ? MIN_CASES : n;

        Dictionary<string, int> animalsCount = new Dictionary<string, int>
        {
            { MICE_KEY, 0 },
            { FROGS_KEY, 0 },
            { RABBITS_KEY, 0 }
        };

        for (int i = 1; i <= n; i++)
        {
            bool inputed = false;

            while (!inputed)
            {
                Console.WriteLine($"Entrada número {i} de {n}:");

                Dictionary<string, string> animalKeyAndName = InputChoice();

                if (animalKeyAndName.ContainsKey(KEY) && animalKeyAndName.ContainsKey(NAME))
                {
                    inputed = InputAnimalQuantity(animalKeyAndName, animalsCount);
                }
            }
        }

        PrintReport(animalsCount);
    }
}