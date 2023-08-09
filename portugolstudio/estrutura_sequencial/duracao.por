/* Problema "duracao"
 * Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
 * formato horas:minutos:segundos.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro duracao, horas, minutos, segundos

	funcao inicio()
	{
		escreva("Digite a duracao em segundos: ")
		leia(duracao)

		horas = duracao / 3600
		minutos = duracao % 3600 / 60
		segundos = (duracao % 3600) % 60

		escreva(horas, ":", minutos, ":", segundos)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 356; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */