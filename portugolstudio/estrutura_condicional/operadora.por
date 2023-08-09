/* Problema "operadora"
 * Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
 * telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
 * ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
*/

programa
{
	inclua biblioteca Matematica --> mat

	inteiro quantidadeDeMinutos

	inteiro minutosDaFranquia = 100
	real custoDoMinutoExcedente = 2.00
	real custoTotal = 50.00

	funcao inicio()
	{
		escreva("Digite a quantidade de minutos: ")
		leia(quantidadeDeMinutos)

		se (quantidadeDeMinutos > minutosDaFranquia) {
			inteiro minutosExcedentes = quantidadeDeMinutos - minutosDaFranquia 
			custoTotal += minutosExcedentes * custoDoMinutoExcedente
		}

		custoTotal = mat.arredondar(custoTotal, 2)

		escreva("VALOR A PAGAR = " + custoTotal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 768; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */