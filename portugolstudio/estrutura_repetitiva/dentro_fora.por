/* Problema "dentro_fora"
 * Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
 * Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
 * conforme exemplo
*/

programa
{
	inteiro n, x, dentro = 0, fora = 0, limiteInferior = 10, limiteSuperior = 20

	funcao inicio()
	{
		escreva("Quantos numeros voce vai digitar? ")
		leia(n)

		para (inteiro i = 1; i <= n; i++)
		{
			escreva("Digite um numero: ")
			leia(x)
			se (limiteInferior <= x e x <= limiteSuperior) {
				dentro += 1
			} senao {
				fora += 1
			}
		}

		escreva("\n" + dentro + " DENTRO")
		escreva("\n" + fora + " FORA")
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