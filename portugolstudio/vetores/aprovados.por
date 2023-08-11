/* Problema "aprovados"
 * Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
 * no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
 * os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
 * igual a 6.0 (seis).
*/

programa
{
	inteiro n
	real medias[10], nota, media
	cadeia nomes[10], aprovados = ""


	funcao inicio()
	{

		escreva("Quantos alunos voce vai digitar (maximo de 10)? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("\nDigite o nome, a primeira e a segunda nota do "+ (i + 1) + "º aluno de " + n + ":\n")

			escreva("Nome: ")
			leia(nomes[i])

			escreva("1ª nota: ")
			leia(nota)
			medias[i] = nota / 2.0

			escreva("2ª nota: ")
			leia(nota)
			medias[i] += nota / 2.0

			se (medias[i] >= 6) {
				aprovados += "\n" + nomes[i]
			}
		}

		se (aprovados != "") {
			escreva("\nAlunos aprovados: " + aprovados)
		} senao {
			escreva("\nNENHUM ALUNO FOI APROVADO")
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