/* Problema "abaixo_da_media"
 * Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
 * mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
 * os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro n
	real vetor[10], media = 0.0

	funcao inicio()
	{

		escreva("Quantos numeros voce vai digitar (maximo de 10)? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("Digite um numero ("+ (i + 1) + " de " + n +  "): ")
			leia(vetor[i])
			media += vetor[i] / n
		}

		escreva("\nMEDIA DO VETOR = " + mat.arredondar(media, 3))
		escreva("\nELEMENTOS ABAIXO DA MEDIA:")

		para (inteiro i = 0; i < n; i++) {
			se (vetor[i] < media) {
				escreva("\n" + vetor[i])
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 622; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */