/* Problema "negativos_matriz"
 * Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
 * exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
*/

programa
{
	inteiro n, m, matriz[10][10]

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
			para (inteiro j = 0; j < m; j++) {
				escreva("Elemento [" + i + ", " + j +  "]: ")
				leia(matriz[i][j])
			}
		}

		escreva("\n\nVALORES NEGATIVOS:\n")
		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < m; j++) {
				se (matriz[i][j] < 0) {
					escreva(matriz[i][j] + "\n")
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 402; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */