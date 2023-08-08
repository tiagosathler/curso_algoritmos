/* Problema "idades"
 * Fazer um programa para ler o nome e idade de duas pessoas.
 * Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas,
 * com uma casa decimal
*/

programa
{
	inclua biblioteca Matematica --> mat
	cadeia nome1, nome2
	inteiro idade1, idade2
	real media
	
	funcao inicio()
	{
		escreva("Dados da primeira pessoa:\n")
		escreva("Nome: ")
		leia(nome1)
		escreva("Idade: ")
		leia(idade1)

		escreva("Dados da segunda pessoa:\n")
		escreva("Nome: ")
		leia(nome2)
		escreva("Idade: ")
		leia(idade2)

		media = mat.arredondar((idade1 + idade2) / 2.0, 1)

		escreva("A idade média de ", nome1, " e ", nome2, " é de ", media, " anos.\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 591; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */