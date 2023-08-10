/* Problema "experiencias"
 * Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
 * organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
 * quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
 * laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
 * informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
 * utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
 * valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
 * inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
 * de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
 * cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
 * percentual deve ser apresentado com dois dígitos após o ponto.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro n, ratos = 0, sapos = 0, coelhos = 0, total
	real percentualRatos, percentualSapos, percentualCoelhos

	funcao logico inputarCobaias(inteiro cobaias, caracter tipo) {
		escolha (tipo) {
			caso 'R':
			{
				ratos += cobaias
				retorne verdadeiro
			}
			caso 'S':
			{
				sapos += cobaias
				retorne verdadeiro
			}
			caso 'C':
			{
				coelhos += cobaias
				retorne verdadeiro
			}
			caso contrario:
			{
				escreva("Opcao invalida! Tente novamente.\n")
				retorne falso
			}
		}
	}

	funcao inicio()
	{
		inteiro cobaias
		caracter tipo

		escreva("Quantos casos de teste serao digitados? ")
		leia(n)

		se (n > 15) {
			n = 15
		}

		para (inteiro i = 1; i <= n; i++)
		{
			logico estaCorreto = falso
			enquanto(nao estaCorreto) {
				escreva("\nEntrada numero " + i + ":\n")
				escreva("Quantidade de cobaias: ")
				leia(cobaias)
				escreva("Tipo de cobaia: ")
				leia(tipo)
				estaCorreto = inputarCobaias(cobaias, tipo)
			}
		}

		total = ratos + sapos + coelhos
		percentualRatos = mat.arredondar(100.0 * ratos / total, 2)
		percentualSapos = mat.arredondar(100.0 * sapos / total, 2)
		percentualCoelhos = mat.arredondar(100.0 * coelhos / total, 2)

		escreva("\nRELATORIO FINAL:")
		escreva("\nTotal: " + total + " cobaias")
		escreva("\nTotal de coelhos: " + coelhos)
		escreva("\nTotal de ratos: " + ratos)
		escreva("\nTotal de sapos: " + sapos)
		escreva("\nPercentual de coelhos: " + percentualCoelhos)
		escreva("\nPercentual de ratos: " + percentualRatos)
		escreva("\nPercentual de sapos: " + percentualSapos)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1587; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */