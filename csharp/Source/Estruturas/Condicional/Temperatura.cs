namespace Source.Estruturas.Condicional;

/**
 * Problema "temperatura"
 * Deseja-se converter uma medida de temperatura da escala Celsius
 * para Fahrenheit ou vice-versa.
 * Para isso, você deve construir um programa que leia a letra "C" ou "F"
 * indicando em qual escala vai ser informada uma temperatura.
 * Em seguida o programa deve mostrar a temperatura na outra escala com duas casas
 * decimais.
 * A seguir são dadas as fórmulas para converter de Fahrenheit para Celsius
 * C = (F - 32) * 5 / 9
 * F = C * 9 / 5 + 32
 */

internal static class Temperatura
{
    public static void Execute()
    {
        Console.Write("Você vai digitar a temperatura em qual escala (C/F)? ");
        char scale = Console.ReadLine()!.ToUpper().ElementAt(0);

        string convertedScale = "";
        double suppliedTemp = 0;
        double convertedTemp = 0;

        switch (scale)
        {
            case 'F':
                {
                    Console.Write("Digite a temperatura em Fahrenheit: ");
                    suppliedTemp = double.Parse(Console.ReadLine()!);

                    convertedTemp = (suppliedTemp - 32) * 5 / 9;
                    convertedScale = "Celsius";
                    break;
                }
            case 'C':
                {
                    convertedScale = "Fahrenheit";
                    Console.Write("Digite a temperatura em Celsius: ");
                    suppliedTemp = double.Parse(Console.ReadLine()!);

                    convertedTemp = suppliedTemp * 9 / 5 + 32;
                    break;
                }
            default:
                {
                    Console.WriteLine("Opção inválida!");
                    break;
                }

        }

        if (suppliedTemp != convertedTemp)
        {
            Console.WriteLine("Temperatura convertida: {0:F2}º {1}", convertedTemp, convertedScale);
        }
    }
}