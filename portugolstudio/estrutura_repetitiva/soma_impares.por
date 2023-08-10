/* Problema "soma_impares"
 * Leia 2 valores inteiros X e Y (em qualquer ordem).
 * A seguir, calcule e mostre a soma dos números impares entre eles.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro x, y, soma = 0

	funcao inicio()
	{

		escreva("Digite dois numeros:\n")
		leia(x)
		leia(y)

		se (x > y) {
			inteiro temp = x
			x = y
			y = temp
		}

		para (inteiro i = x + 1; i < y; i++)
		{
			se (i % 2 != 0) {
				soma += i
			}
		}

		escreva("\nSOMA DOS IMPARES = " + soma)
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