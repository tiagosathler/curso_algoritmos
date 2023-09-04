/* Problema "combustivel"
 * Um posto de combustíveis deseja determinar qual de seus produtos
 * tem a preferência de seus clientes.
 * Escreva um algoritmo para ler o tipo de combustível abastecido
 * (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
 * Caso o usuário informe um código inválido (fora da faixa de 1 a
 * 4) deve ser solicitado um novo código (até que seja válido).
 * O programa será encerrado quando o código informado for o número 4,
 * devendo então mostrar a mensagem "MUITO OBRIGADO", bem
 * como as quantidades de cada combustível.
*/

programa
{
	inteiro opcao, alcool = 0, gasolina = 0, diesel = 0

	funcao inicio()
	{
		faca
		{
			escreva("Informe um codigo (1, 2, 3) ou 4 para parar: ")

			leia(opcao)

			escolha(opcao)
			{
				caso 1:
					alcool += 1
				pare
				caso 2:
					gasolina += 1
				pare
				caso 3:
					diesel += 1
				pare
			}
		} enquanto (opcao != 4)

		escreva("MUITO OBRIGADO")
		escreva("\n   Alcool: " + alcool)
		escreva("\n Gasolina: " + gasolina)
		escreva("\n   Diesel: " + diesel)
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