/* Problema "mais_velho"
 * Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
 * devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
 * da pessoa mais velha.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inclua biblioteca Tipos --> tip

	inteiro n, idades[10], posicaoDoMaisVelho, maiorIdade = 0
	cadeia nomes[10]


	funcao inicio()
	{

		escreva("Quantos pessoas voce vai digitar (maximo de 10)? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("\nDados da "+ (i + 1) + "ª pessoa de " + n + ":\n")

			escreva("Nome: ")
			leia(nomes[i])

			escreva("Idade: ")
			leia(idades[i])

			se (idades[i] > maiorIdade) {
				maiorIdade = idades[i]
				posicaoDoMaisVelho = i
			}
		}

		escreva("\nPessoa mais velha: " + nomes[posicaoDoMaisVelho])
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 822; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */