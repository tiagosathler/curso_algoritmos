/* Problema "lanchonete"
 * Uma lanchonete possui vários produtos. Cada produto possui um código
 * e um preço. Você deve fazer um programa para ler o código e a
 * quantidade comprada de um produto (suponha um código válido), e daí
 * informar qual o valor a ser pago, com duas casas decimais, conforme
 * tabela de produtos abaixo.
 *
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

programa
{
	inteiro codigoDoProdutoComprado, quantidadeComprada
	real valorAPagar = 0.0

	funcao inicio()
	{
		escreva("Codigo do produto comprado: ")
		leia(codigoDoProdutoComprado)
		escreva("Quantidade comprada: ")
		leia(quantidadeComprada)

		se (codigoDoProdutoComprado == 1) {
			valorAPagar += quantidadeComprada * 5.00
		} senao se (codigoDoProdutoComprado == 2) {
			valorAPagar += quantidadeComprada * 3.50
		} senao se (codigoDoProdutoComprado == 3) {
			valorAPagar += quantidadeComprada * 4.80
		} senao se (codigoDoProdutoComprado == 4) {
			valorAPagar += quantidadeComprada * 8.90
		} senao se (codigoDoProdutoComprado == 5){
			valorAPagar += quantidadeComprada * 7.32
		}

		escreva("Valor a pagar: R$ " + valorAPagar)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 919; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */