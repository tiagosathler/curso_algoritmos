/* Problema "cada_linha"
 * Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
 * de cada linha. Suponha não haver empates.
*/

programa
{
	inteiro n, matriz[10][10], maiorNumeroDaLinha[10]

	funcao inicio()
	{

		escreva("Qual a ordem da matriz (maximo de 10)? ")
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
			maiorNumeroDaLinha[i] = matriz[i][0]
			para (inteiro j = 0; j < n; j++) {
				se (matriz[i][j] > maiorNumeroDaLinha[i]) {
					maiorNumeroDaLinha[i] = matriz[i][j]
				}
			}
		}

		escreva("\n\nMAIOR ELEMENTO DE CADA LINHA: \n")
		para (inteiro i = 0; i < n; i++) {
			escreva(maiorNumeroDaLinha[i] + "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 723; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */