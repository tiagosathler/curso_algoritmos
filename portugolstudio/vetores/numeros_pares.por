/* Problema "numeros_pares"
 * Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
 * tela todos os números pares, e também a quantidade de números pares.
*/

programa
{
	inteiro n,  vetor[10], quantidade = 0
	cadeia numerosPares = ""

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
				quantidade += 1
				numerosPares += " " + vetor[i]
			}
		}

		escreva("NUMEROS PARES = \n")
		escreva(numerosPares)
		escreva("\n\nQUANTIDADES DE PARES = " + quantidade)
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