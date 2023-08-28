namespace Source.Estruturas.Condicional;

/**
 * Problema "lanchonete"
 * Uma lanchonete possui vários produtos. Cada produto possui um código
 * e um preço. Você deve fazer um programa para ler o código e a
 * quantidade comprada de um produto (suponha um código válido), e daí
 * informar qual o valor a ser pago, com duas casas decimais, conforme
 * tabela de produtos abaixo.
 * *--------------------------------------*
 * | Código do produto | Preço do produto |
 * |-------------------|------------------|
 * |         1         |      R$ 5.00     |
 * |         2         |      R$ 3.50     |
 * |         3         |      R$ 4.80     |
 * |         4         |      R$ 8.90     |
 * |         5         |      R$ 7.32     |
 * *--------------------------------------*
 */

internal static class Lanchonete
{

    public static void Execute()
    {
        Console.Write("Código do produto comprado: ");
        int productCode = int.Parse(Console.ReadLine()!);

        double price = 0.0;
        switch (productCode)
        {
            case 1:
                {
                    price = 5.00;
                    break;
                }

            case 2:
                {
                    price = 3.50;
                    break;
                }
            case 3:
                {
                    price = 4.80;
                    break;
                }
            case 4:
                {
                    price = 8.90;
                    break;
                }
            case 5:
                {
                    price = 7.32;
                    break;
                }
            default:
                {
                    Console.WriteLine("Produto inexistente!");
                    break;
                }
        }

        if (price != 0)
        {
            Console.Write("Quantidade comprada: ");
            int quantity = int.Parse(Console.ReadLine()!);

            double amountToPay = price * quantity;
            Console.WriteLine("Valor a pagar: R$ {0:F2}", amountToPay);
        }
    }
}