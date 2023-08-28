namespace Source.Estruturas.Sequencial;

/**
 * Problema "idades"
 * Fazer um programa para ler o nome e idade de duas pessoas.
 * Ao const mostrar uma mensagem com os nomes e a idade média
 * entre essas pessoas, com uma casa decimal
 */

internal static class Idades
{
    /**
     * The entry point of application.
     *
     * @param args the input arguments
     */
    static public void Execute()
    {
        Console.WriteLine("Dados da primeira pessoa:");
        Console.Write("Nome: ");
        string name1 = Console.ReadLine()!;

        Console.Write("Idade: ");
        int age1 = int.Parse(Console.ReadLine()!);

        Console.WriteLine("Dados da segunda pessoa:");
        Console.Write("Nome: ");
        string name2 = Console.ReadLine()!;

        Console.Write("Idade: ");
        int age2 = int.Parse(Console.ReadLine()!);

        double averageAge = (age1 + age2) / 2.0;

        Console.WriteLine("A idade média de {0} e {1} é de {2:F1} anos.", name1, name2, averageAge);
    }
}