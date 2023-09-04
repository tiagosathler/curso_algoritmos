/* Problema "crescente"
 * Leia uma quantidade indeterminada de duplas de valores
 * inteiros X e Y. Escreva para cada X e Y uma
 * mensagem que indique se estes valores foram digitados
 * em ordem crescente ou decrescente. O programa deve
 * finalizar quando forem digitados dois valores iguais.
*/

programa
{
	inteiro a, b

	funcao inicio()
	{
		faca
		{
			escreva("Digite dois numeros inteiros (a) e (b): \n")
			leia(a)
			leia(b)
			se (a > b) {
				escreva("DECRESCENTE!\n")
			} senao se (a < b) {
				escreva("CRESCENTE!\n")
			}
			} enquanto (a != b)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 705; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */