/* Problema "troco_verificado"
 * Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
 * O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
 * e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
 * ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
 * valor restante conforme exemplo.
*/

programa
{
	inteiro quantidadeComprada
	real precoDoProduto, dinheiroRecebido, troco

	funcao inicio()
	{
		escreva("Preço unitário do produto: ")
		leia(precoDoProduto)
		escreva("Quantidade comprada: ")
		leia(quantidadeComprada)
		escreva("Dinheiro recebido: ")
		leia(dinheiroRecebido)

		troco = dinheiroRecebido - precoDoProduto * quantidadeComprada

		se (troco >= 0) {
			escreva("TROCO = " + troco)
		} senao {
			escreva("DINHEIRO INSUFICIENTE. FALTAM " + -troco, " REAIS")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 621; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */