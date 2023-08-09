/* Problema "dardo"
 * No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
 * Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
 * foi a maior.
*/

programa
{
	real a, b, c, maior

	funcao inicio()
	{
		escreva("Digite as tres distancias:\n")
		leia(a)
		leia(b)
		leia(c)

		se (a >= b e a >= c) {
			maior = a
		} senao se (b >= c) {
			maior = b
		} senao {
			maior = c
		}

		escreva("MAIOR DISTANCIA = " + maior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 516; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */