/* Problema "notas"
 * Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
 * uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
 * ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
 *mensagem "REPROVADO", conforme exemplos.
*/

programa
{
	inclua biblioteca Matematica --> mat
	real a, b, notaFinal

	funcao inicio()
	{
		escreva("Digite a primeira nota:")
		leia(a)
		escreva("Digite a segunda nota:")
		leia(b)

		notaFinal = mat.arredondar(a + b, 1)

		escreva("NOTA FINAL = " + notaFinal)

		se (notaFinal < 60) {
			escreva("\nREPROVADO")
		}
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