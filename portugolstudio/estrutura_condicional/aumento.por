/* Problema "aumento"
 * Uma empresa vai conceder um aumento percentual de
 * salário aos seus funcionários dependendo de quanto
 * cada pessoa ganha, conforme tabela ao lado. Fazer um
 * programa para ler o salário de uma pessoa, daí mostrar
 * qual o novo salário desta pessoa depois do aumento,
 * quanto foi o aumento e qual foi a porcentagem de
 * aumento.
 *
 * Salário atual
 * Até R$ 1000.00                      -> Aumento 20%
 * Acima de R$ 1000.00 até R$ 3000.00  -> Aument0 15% 
 * Acima de R$ 3000.00 até R$ 8000.00  -> Aumento 10%
 * Acima de R$ 8000.00                 -> Aumento 5%
*/

programa
{
	inclua biblioteca Matematica --> mat
	real salarioAtual, novoSalario, aumento
	inteiro porcentagem

	funcao inicio()
	{
		escreva("Digite o salario da pessoa: ")
		leia(salarioAtual)

		se (salarioAtual <= 1000.00) {
			porcentagem = 20.0
		} senao se (salarioAtual <= 3000.00) {
			porcentagem = 15.0
		} senao se (salarioAtual <= 8000.00) {
			porcentagem = 10.0
		} senao {
			porcentagem = 5.0
		}

		aumento = mat.arredondar(salarioAtual * porcentagem / 100, 2)
		novoSalario = salarioAtual + aumento

		escreva("Novo salario = R$ " + novoSalario)
		escreva("\nAumento = R$ " + aumento)
		escreva("\nPorcentagem = " + porcentagem + "%")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 705; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */