namespace Source.Estruturas.Repetidas;

/**
 * Problema "senha_fixa"
 * Escreva um programa que repita a leitura de uma senha
 * até que ela seja válida. Para cada leitura de senha incorreta
 * informada, escrever a mensagem "Senha Invalida! Tente novamente:".
 * Quando a senha for informada corretamente deve ser impressa a mensagem
 * "Acesso Permitido" e o algoritmo encerrado.
 * Considere que a senha correta é o valor 2002.
 */
internal static class SenhaFixa
{
    private static readonly short PASSWORD = 2002;

    public static void Execute()
    {
        Console.Write("Digite a senha: ");

        int password = int.Parse(Console.ReadLine()!);

        while (password != PASSWORD)
        {
            Console.Write("Senha inválida! Digite novamente: ");
            password = int.Parse(Console.ReadLine()!);
        }

        Console.WriteLine("Acesso permitido!");
    }
}