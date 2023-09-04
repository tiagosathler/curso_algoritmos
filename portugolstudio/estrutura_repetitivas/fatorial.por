/* Problema "fatorial"
 * Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
 * fatorial de N.
*/

programa
{
	inteiro n, fatorial = 1

	funcao inicio()
	{
		escreva("Digite o valor de N: ")
		leia(n)

		se (n > 15) {
			n = 15
		}

		para (inteiro i = 1; i <= n; i++)
		{
			fatorial *= i
		}

		escreva("FATORIAL = " + fatorial)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 287; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */