/* Problema "divisao"
 * Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
 * segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro n
	real numerador, denominador, divisao

	funcao inicio()
	{
		escreva("Quantos numeros voce vai digitar? ")
		leia(n)

		para (inteiro i = 1; i <= n; i++)
		{
			escreva("\nEntre com o numerador: ")
			leia(numerador)
			escreva("Entre com o denominador: ")
			leia(denominador)
			se (denominador != 0) {
				divisao = mat.arredondar(numerador / denominador, 2)
				escreva("DIVISAO = " + divisao)
			} senao {
				escreva("DIVISAO IMPOSSIVEL")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 287; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */