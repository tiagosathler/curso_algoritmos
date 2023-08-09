/* Problema "coordenadas"
 * Leia os valores das coordenadas X e Y de um ponto no plano
 * cartesiano. A seguir, determine qual o quadrante ao qual pertence o
 * ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
 * mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
 * “Eixo X” ou “Eixo Y”, conforme for a situação.
 *
 *       y
 *   Q2  |  Q1
 *   --------- x
 *   Q3  |  Q4
*/

programa
{
	real x, y
	cadeia quadrante = "Origem"

	funcao inicio()
	{
		escreva("Valor de X: ")
		leia(x)

		escreva("Valor de Y: ")
		leia(y)

		se (x > 0 e y > 0) {
			quadrante = "Q1"
		} senao se (x < 0 e y > 0) {
			quadrante = "Q2"
		} senao se (x < 0 e y < 0) {
			quadrante = "Q3"
		} senao se (x > 0 e y < 0) {
			quadrante = "Q4"
		} senao se (x == 0 e y != 0) {
			quadrante = "Eixo Y"
		} senao se (y == 0 e x != 0) {
			quadrante = "Eixo X"
		}

		escreva(quadrante)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 701; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */