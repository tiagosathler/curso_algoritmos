/* Problema "sequencia_impares"
 * Leia um valor inteiro X.
 * Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
*/

programa
{
	inteiro x

	funcao inicio()
	{

		escreva("Digite o valor de X: ")
		leia(x)

		para (inteiro i = 1; i <= x; i++)
		{
			se (i % 2 == 1) {
				escreva(i + "\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 464; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */