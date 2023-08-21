/* Problema "acima_diagonal"
 * Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
 * contendo números inteiros. Mostrar a soma dos elementos acima da
 * diagonal principal.
*/

programa
{
	inteiro n, matriz[10][10], somatorio = 0

	funcao inicio()
	{

		escreva("Qual a ordem da matriz? ")
		leia(n)

		se (n > 10 ou n <= 0) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < n; j++) {
				escreva("Elemento [" + i + ", " + j +  "]: ")
				leia(matriz[i][j])
			}
		}

		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < n; j++) {
				se (j > i) {
					somatorio += matriz[i][j]
				}
			}
		}

		escreva("\n\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + somatorio)
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