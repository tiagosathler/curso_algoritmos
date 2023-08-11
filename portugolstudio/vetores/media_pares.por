/* Problema "media_pares"
 * Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
 * aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
 * digitado, mostrar a mensagem "NENHUM NUMERO PAR"
 * 
 */

programa
{
	inclua biblioteca Matematica --> mat
	inteiro n, vetor[10]
	real media = 0.0, numeroDePares = 0.0

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
			se (vetor[i] % 2 == 0) {
				media += vetor[i]
				numeroDePares += 1
			}
		}

		se (numeroDePares > 0) {
			media /= numeroDePares
			escreva("\nMEDIA DOS PARES = " + mat.arredondar(media, 1))
		} senao {
			escreva("\nNENHUM NUMERO PAR")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 275; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */