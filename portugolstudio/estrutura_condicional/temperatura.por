/* Problema "temperatura"
 * Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa.
 * Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
 * informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala comduas casas
 * decimais. A seguir é dada * a fórmula para converter de Fahrenheit para Celsius (você deve deduzir a fórmula
 * de Celsius para Fahrenheit):
 *
 * C = (F - 32) * 5 / 9
 * F = C * 9 / 5 + 32
*/

programa
{
	inclua biblioteca Matematica --> mat

	cadeia opcao
	real temperaturaFornecida, temperaturaConvertida

	funcao inicio()
	{
		escreva("Voce vai digitar a temperatura em qual escala (C/F)? ")
		leia(opcao)

		se (opcao == "F") {
			escreva("Digite a temperatura em Fahrenheit: ")
			leia(temperaturaFornecida)
			temperaturaConvertida = mat.arredondar((temperaturaFornecida - 32) * 5 / 9, 2)
			escreva("Temperatura equivalente em Celsius: " + temperaturaConvertida)
		} senao se (opcao == "C") {
			escreva("Digite a temperatura em Celsius: ")
			leia(temperaturaFornecida)
			temperaturaConvertida = mat.arredondar(temperaturaFornecida * 9 / 5 + 32, 2)
			escreva("Temperatura equivalente em Fahrenheit: " + temperaturaConvertida)
		} senao {
			escreva("OPCAO INVALIDA!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 668; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */