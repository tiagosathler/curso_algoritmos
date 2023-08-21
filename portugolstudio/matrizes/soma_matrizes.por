/* Problema "soma_matrizes"
 * Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
 * cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
 * dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
*/

programa
{
	inteiro n, m, matrizA[10][10], matrizB[10][10], matrizSoma[10][10]

	funcao inicio()
	{

		escreva("Quantas linhas vai ter cada matriz (maximo de 10)? ")
		leia(n)

		se (n > 10 ou n <= 0) {
			n = 10
		}

		escreva("Quantas colunas vai ter cada matriz? (maximo de 10)? ")
		leia(m)

 		se (m > 10 ou m <= 0) {
			m = 10
		}

		escreva("\nDigite os valores da matriz A:\n")
		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < m; j++) {
				escreva("Elemento [" + i + ", " + j +  "]: ")
				leia(matrizA[i][j])
			}
		}

		escreva("\nDigite os valores da matriz B:\n")
		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < m; j++) {
				escreva("Elemento [" + i + ", " + j +  "]: ")
				leia(matrizB[i][j])
			}
		}

		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < m; j++) {
				matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j]
			}
		}

		escreva("\n\nMATRIZ SOMA:\n")
		para (inteiro i = 0; i < n; i++) {
			para (inteiro j = 0; j < m; j++) {
				escreva(matrizSoma[i][j] + " ")
			}
			escreva("\n")
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