/* Problema "comerciante"
 * Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
 * mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
 * venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
 * proporcionaram:
 *  - lucro < 10%
 *  - 10% ≤ lucro ≤ 20%
 *  - lucro > 20%
 * Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
 * o lucro total.
*/

programa
{
	inteiro n, qtdProdPrimeiraFaixa = 0, qtdProdSegundaFaixa = 0, qtdProdTerceiraFaixa = 0
	cadeia nomeDoProduto[10]
	real valorDaVenda[10], valorDaCompra[10], lucroDoProduto[10]
	real valorTotalDeVendas = 0.0, valorTotalDeCompras = 0.0, lucroTotal = 0.0

	funcao inicio()
	{
		escreva("Serao digitados dados de quantos produtos (maximo de 10)? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("\nProduto "+ (i + 1) + " de " + n + ":\n")

			escreva("Nome: ")
			leia(nomeDoProduto[i])

			escreva("Preco de compra: ")
			leia(valorDaCompra[i])
			valorTotalDeCompras += valorDaCompra[i]

			escreva("Preco de venda: ")
			leia(valorDaVenda[i])
			valorTotalDeVendas += valorDaVenda[i]

			lucroTotal += valorDaVenda[i] - valorDaCompra[i]

			lucroDoProduto[i] = (valorDaVenda[i] - valorDaCompra[i]) / valorDaCompra[i]

			se (lucroDoProduto[i] < 0.1) {
				qtdProdPrimeiraFaixa += 1
			} senao se (lucroDoProduto[i] <= 0.2) {
				qtdProdSegundaFaixa += 1
			} senao {
				qtdProdTerceiraFaixa += 1
			}
		}

		escreva("\n\nRELATORIO")
		escreva("\nLucro abaixo de 10%: " + qtdProdPrimeiraFaixa)
		escreva("\nLucro entre 10% e 20%: " + qtdProdSegundaFaixa)
		escreva("\nLucro acima de 20%: " + qtdProdTerceiraFaixa)

		escreva("\n\nValor total de compra: " + valorTotalDeCompras)
		escreva("\nValor total de venda: " + valorTotalDeVendas)

		escreva("\n\nLucro total: " + lucroTotal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 545; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */