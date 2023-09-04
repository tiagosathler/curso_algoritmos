/* Problema "quadrante"
 * Escreva um programa para ler as coordenadas (X,Y)
 * de uma quantidade indeterminada de pontos no
 * sistema cartesiano. Para cada ponto escrever
 * o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
 * O algoritmo será encerrado quando pelo menos 
 * uma de duas coordenadas for NULA (nesta situação sem
 * escrever mensagem alguma).
 *
 *       y
 *   Q2  |  Q1
 *   --------- x
 *   Q3  |  Q4
*/

programa
{
	inteiro x, y
	cadeia quadrante

	funcao inicio()
	{
		faca {
			escreva("\nDigite os valores das coordenadas X e Y:\n")

			leia(x)
			leia(y)

			se (x > 0 e y > 0) {
				escreva("QUADRANTE Q1\n")
			} senao se (x < 0 e y > 0) {
				escreva("QUADRANTE Q2\n")
			} senao se (x < 0 e y < 0) {
				escreva("QUADRANTE Q3\n")
			} senao se (x > 0 e y < 0) {
				escreva("QUADRANTE Q4\n")
			}

		} enquanto (x != 0 e y != 0)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 822; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */