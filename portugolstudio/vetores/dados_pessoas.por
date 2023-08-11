/* Problema "dados_pessoas"
 * Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
 * que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
 * de homens.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inclua biblioteca Tipos --> tip

	inteiro n, quantidadeDeHomens = 0, quantidadeDeMulheres = 0
	real alturas[10], mediaDasAlturas = 0.0, mediaDasAlturasMasculinas = 0.0, mediaDasAlturasFemininas = 0.0
	real maiorAltura = 0.0, menorAltura = 10.0
	caracter generos[10], generoMenorAltura, generoMaiorAltura

	funcao inicio()
	{

		escreva("Quantos pessoas serao digitadas (maximo de 10)? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("\nAltura da "+ (i + 1) + "ª pessoa de " + n + ": ")
			leia(alturas[i])

			escreva("Genero da "+ (i + 1) + "ª pessoa de " + n + " ('M/m' ou 'F/f'): ")
			leia(generos[i])

			mediaDasAlturas += alturas[i] / n

			se (alturas[i] > maiorAltura) {
				maiorAltura = alturas[i]
				generoMaiorAltura = generos[i]
			}

			se (alturas[i] < menorAltura) {
				menorAltura = alturas[i]
				generoMenorAltura = generos[i]
			}

			se (generos[i] == 'M' ou generos[i] == 'm') {
				quantidadeDeHomens += 1
				mediaDasAlturasMasculinas += alturas[i]
			} senao se (generos[i] == 'F' ou generos[i] == 'f') {
				quantidadeDeMulheres += 1
				mediaDasAlturasFemininas += alturas[i]
			}
		}

		escreva("\nAltura média geral: " + mat.arredondar(mediaDasAlturas, 2) + "m")
		
		escreva("\n\nMenor altura: " + menorAltura + "m do genero: " + generoMenorAltura)
		escreva("\nMaior altura: " + maiorAltura + "m do genero: " + generoMaiorAltura)

		se (quantidadeDeHomens > 0) {
			mediaDasAlturasMasculinas /= quantidadeDeHomens
			escreva("\n\nNúmero de homens: " + quantidadeDeHomens)
			escreva("\nMédia das alturas dos homens: " + mat.arredondar(mediaDasAlturasMasculinas, 2) + "m")
		}

		se (quantidadeDeMulheres > 0) {
			mediaDasAlturasFemininas /= quantidadeDeMulheres
			escreva("\n\nNúmero de mulheres: " + quantidadeDeMulheres)
			escreva("\nMédia das alturas das mulheres: " + mat.arredondar(mediaDasAlturasFemininas, 2) + "m")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1556; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */