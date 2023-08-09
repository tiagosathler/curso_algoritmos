/* Problema "pagamento"
 * Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
 * quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
 * uma mensagem explicativa
*/

programa
{
	inclua biblioteca Matematica --> mat
	cadeia nome
	real valorPorHora, pagamento
	inteiro horasTrabalhadas
	
	funcao inicio()
	{
		escreva("Nome: ")
		leia(nome)
		escreva("Valor por hora: ")
		leia(valorPorHora)
		escreva("Horas trabalhadas: ")
		leia(horasTrabalhadas)

		pagamento = valorPorHora * horasTrabalhadas

		escreva("O pagamento para ", nome, " deve ser ", pagamento)
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