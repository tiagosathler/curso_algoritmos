/* Problema "par_impar"
 * Leia um valor inteiro N.
 * Este valor será a quantidade de números inteiros que serão lidos em seguida.
 * Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
 * se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
 * apenas NULO.
*/

programa
{
	inteiro n, x, tipo, resto, sinal

	funcao inicio()
	{
		escreva("Quantos numeros voce vai digitar? ")
		leia(n)

		para (inteiro i = 1; i <= n; i++)
		{
			tipo = 0
			escreva("Digite um numero: ")
			leia(x)

			se (x != 0) {
				//  x -> resto + sinal = tipo
				// -3 ->  (-1) +  (-1) = -2    -> impar negativo
				//  3 ->   (1) +   (1) =  2    -> impar positivo
				//  2 ->   (0) +   (1) =  1    -> par positivo
				// -2 ->   (0) +  (-1) = -1    -> par negativo
				resto = x % 2
				sinal = (2 * x + 1) % 2
 				tipo = resto + sinal
			}

			escolha(tipo) {
				caso -2:
				{
					escreva("IMPAR NEGATIVO\n")
					pare
				}
				caso -1:
				{
					escreva("PAR NEGATIVO\n")
					pare
				}
				caso 0:
				{
					escreva("NULO\n")
					pare
				}
				caso 1:
				{
					escreva("PAR POSITIVO\n")
					pare
				}
				caso 2:
				{
					escreva("IMPAR POSITIVO\n")
					pare
				}
				caso contrario:
				{
					escreva("OPS, ALGO SAIU ERRADO...\n")
					pare
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 584; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */