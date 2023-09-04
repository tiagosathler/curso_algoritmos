/* Problema "tabuada"
 * Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
*/

programa
{
	inteiro n

	funcao inicio()
	{

		escreva("\nDeseja a tabuada para qual valor? ")
		leia(n)

		para (inteiro i = 1; i <= 10; i++)
		{
			escreva("\n" + n + " x " + i + " = " + i * n)
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