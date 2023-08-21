/* Problema "soma_linhas"
 * Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
 * de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
 * seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/

programa
{
	inteiro n, m
	real matriz[10][10], vetor[10]

	funcao inicio()
	{

		escreva("Qual a quantidade de linhas da matriz (maximo de 10)? ")
		leia(n)

		se (n > 10 ou n <= 0) {
			n = 10
		}

		escreva("Qual a quantidade de colunas da matriz (maximo de 10)? ")
		leia(m)

 		se (m > 10 ou m <= 0) {
			m = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("Digite os " + m + " elementos da " + (i + 1) + "ª linha (de " + n + " linhas):\n")
			para (inteiro j = 0; j < m; j++) {
				leia(matriz[i][j])
			}
		}

		para (inteiro i = 0; i < n; i++) {
			vetor[i] = 0.0
			para (inteiro j = 0; j < m; j++) {
				vetor[i] += matriz[i][j]
			}
		}

		escreva("\n\nVETOR GERADO:\n")
		para (inteiro i = 0; i < n; i++) {
			escreva(vetor[i] + "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 707; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */