/* Problema "maior_posicao"
 * Faça um programa que leia N números reais positivos e armazene-os em um vetor. Em seguida, mostrar na tela
 * o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
 * considerando a primeira posição como 0 (zero).
*/

programa
{
	inteiro n, posicao
	real vetor[10]
	real maiorValor = 0.0

	funcao inicio()
	{

		escreva("Quantos numeros voce vai digitar? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("Digite um numero ("+ (i + 1) + " de " + n +  "): ")
			leia(vetor[i])
			se (vetor[i] > maiorValor) {
				maiorValor = vetor[i]
				posicao = i
			}
		}

		escreva("\nMAIOR VALOR = " + maiorValor)
		escreva("\nPOSICAO DO MAIOR VALOR = " + posicao)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 469; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */