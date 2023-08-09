/* Problema "multiplos"
 * Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
 * números podem ser digitados em qualquer ordem.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro a, b

	funcao inicio()
	{
		escreva("Digite dois numeros inteiros:\n")
		leia(a)
		leia(b)

		se (se a % b == 0 ou b % c == 0) {
			escreva("\nSao multiplos")
		} senao {
			escreva("\nNao sao multiplos")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 332; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */