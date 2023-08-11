/* Problema "alturas"
 * Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
 * tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
 * bem como os nomes dessas pessoas caso houver.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inclua biblioteca Tipos --> tip

	inteiro n, idades[10]
	real alturas[10], mediaDasAlturas = 0.0, menoresDeIdade = 0.0
	cadeia nomes[10]


	funcao inicio()
	{

		escreva("Quantos numeros voce vai digitar (maximo de 10)? ")
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

			escreva("Altura (m): ")
			leia(alturas[i])

			mediaDasAlturas += alturas[i] / n

			se (idades[i] < 16) {
				menoresDeIdade += 1 / tip.inteiro_para_real(n)
			}
		}

		escreva("\nAltura média: " + mat.arredondar(mediaDasAlturas, 2) + "m")
		escreva("\nPessoas com menos de 16 anos: " + mat.arredondar( 100 * menoresDeIdade, 2) + "%\n")

		para (inteiro i = 0; i < n; i++) {
			se (idades[i] < 16) {
				escreva(" - " + nomes[i] + "\n")
			}
		}
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