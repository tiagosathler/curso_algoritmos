/* Problema "pares_consecutivos"
 * O programa deve ler um valor inteiro X indefinidas vezes.
 * (O programa irá parar quando o valor de X for igual a 0).
 * Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X,
 * inclusive o X, se for par. Se o valor de entrada for 4, por exemplo,
 * a saída deve ser 40, que é o resultado da operação:
 * 4+6+8+10+12, enquanto que se o valor de entrada for 11,
 * por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.
*/

programa
{
	inteiro x = 1, soma, quantidadeDeIteracoes = 5

	funcao inicio()
	{
		enquanto (x != 0)
		{
			soma = 0
			escreva("\nDigite um numero inteiro: ")
			leia(x)

			se (x != 0) {
				x = x + x % 2

				para (inteiro i = 0; i < quantidadeDeIteracoes; i++)
				{
					soma += x + 2 * i
				}
				
				escreva("SOMA = ", soma, "\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 529; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */