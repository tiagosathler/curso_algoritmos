/* Problema "glicose"
 * Fazer um programa para ler a quantidade de glicose
 * no sangue de uma pessoa e depois mostrar na tela a
 * classificação desta glicose de acordo com a tabela de
 * referência abaixo:
 *
 * |----------------------------------------------|
 * | Classificação  | Glicose                     |
 * |----------------------------------------------|
 * | Normal         | Até 100 mg/dl               |
 * | Elevado        | Maior que 100 até 140 mg/dl |
 * | Diabetes       | Maior de 140 mg/dl          |
 * |----------------------------------------------|
*/

programa
{
	real nivelDeGlicoseMedido

  real nivelNormal = 100.00
  real nivelElevado = 140.00

  cadeia classificacao = "diabetes"

	funcao inicio()
	{
		escreva("Digite a medida da glicose: ")
		leia(nivelDeGlicoseMedido)

		se (nivelDeGlicoseMedido <= nivelNormal) {
			classificacao = "normal"
		} senao se (nivelDeGlicoseMedido <= nivelElevado) {
			classificacao = "elevado"
		}

		escreva("Classificacao = " + classificacao)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 675; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */