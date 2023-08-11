/* Problema "soma_vetores"
 * Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
 * terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
 * o vetor C gerado.
*/

programa
{
	inteiro n, vetorA[10], vetorB[10], vetorC[10]
	
	funcao inicio()
	{
		escreva("Quantos valores vai ter cada vetor (maximo de 10)? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		escreva("\nDigite os valores do vetor A:\n")
		para (inteiro i = 0; i < n; i++) {
			leia(vetorA[i])
			vetorC[i] = vetorA[i]
		}

		escreva("\nDigite os valores do vetor B:\n")
		para (inteiro i = 0; i < n; i++) {
			leia(vetorB[i])
			vetorC[i] += vetorB[i]
		}

		escreva("\nVETOR RESULTANTE:\n")
		para (inteiro i = 0; i < n; i++) {
			escreva(vetorC[i] + "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 613; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */