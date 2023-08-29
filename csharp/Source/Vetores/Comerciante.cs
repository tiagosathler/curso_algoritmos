namespace Source.Vetores;

/**
 * Problema "comerciante"
 * Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
 * Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome,
 * preço de compra e preço de venda das mesmas.
 * Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
 * proporcionaram:
 * - lucro < 10%
 * - 10% ≤ lucro ≤ 20%
 * - lucro > 20%
 * Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
 * o lucro total.
 */
internal static class Comerciante
{

    private static readonly short MIN_SIZE = 1;
    private static readonly short MAX_SIZE = 10;

    private static readonly short PROFIT_LIMIT_1 = 10;
    private static readonly short PROFIT_LIMIT_2 = 20;

    private static Product[] GetProduct(int size)
    {
        Product[] products = new Product[size];

        for (int i = 0; i < products.Length; i++)
        {
            Console.WriteLine($"Produto {i + 1} de {products.Length}:");

            Console.Write("Nome: ");
            string name = Console.ReadLine()!; ;

            Console.Write("Preço de compra: ");
            double purchasePrice = double.Parse(Console.ReadLine()!);

            Console.Write("Preço de venda: ");
            double salePrice = double.Parse(Console.ReadLine()!);

            double profit = salePrice - purchasePrice;
            products[i] = new Product(name, salePrice, purchasePrice, profit);
        }

        return products;
    }

    private static Statistic GetStatistics(Product[] products)
    {
        int loss = 0;

        int profitCountRange1 = 0;
        int profitCountRange2 = 0;
        int profitCountRange3 = 0;

        foreach (Product p in products)
        {
            double profitPercentage = 100 * p.Profit / p.PurchasePrice;
            if (profitPercentage > PROFIT_LIMIT_2)
            {
                profitCountRange3++;
            }
            else if (profitPercentage >= PROFIT_LIMIT_1)
            {
                profitCountRange2++;
            }
            else if (profitPercentage >= 0)
            {
                profitCountRange1++;
            }
            else
            {
                loss++;
            }
        }

        double totalSale = 0;
        double totalPurchase = 0;
        double totalProfit = 0;

        foreach (Product p in products)
        {
            totalSale += p.SalePrice;
            totalPurchase += p.PurchasePrice;
            totalProfit += p.Profit;
        }
        return new Statistic(loss, profitCountRange1, profitCountRange2, profitCountRange3, totalSale, totalPurchase, totalProfit);
    }

    private static void PrintStatistic(Statistic s)
    {
        Console.WriteLine("RELATÓRIO");
        Console.WriteLine($"\nLucro abaixo de {PROFIT_LIMIT_1}%: {s.ProfitCountRange1}");
        Console.WriteLine($"Lucro entre de {PROFIT_LIMIT_1} e {PROFIT_LIMIT_2}%: {s.ProfitCountRange2}");
        Console.WriteLine($"Lucro acima de {PROFIT_LIMIT_2}%: {s.ProfitCountRange3}");
        Console.WriteLine($"Prejuízos: {s.Loss}");

        Console.WriteLine($"\nValor total de compras: R$ {s.TotalPurchase:F2}");
        Console.WriteLine($"Valor total de vendas: R$ {s.TotalSale:F2}");
        Console.WriteLine($"Lucro total: R$ {s.TotalProfit:F2}");
    }

    public static void Execute()
    {
        Console.Write($"Serão digitados dados de quantos produtos (máximo de {MAX_SIZE})? ");

        int n = int.Parse(Console.ReadLine()!);

        n = n < MIN_SIZE || n > MAX_SIZE ? MIN_SIZE : n;

        Product[] products = GetProduct(n);

        PrintStatistic(GetStatistics(products));
    }

    private sealed record Product(
        string Name,
        double SalePrice,
        double PurchasePrice,
        double Profit);

    private sealed record Statistic(
        int Loss,
        int ProfitCountRange1,
        int ProfitCountRange2,
        int ProfitCountRange3,
        double TotalSale,
        double TotalPurchase,
        double TotalProfit);
}