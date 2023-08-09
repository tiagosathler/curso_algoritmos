/* Problema "menor_de_tres"
 * Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
 * números lidos. Em caso de empate, mostrar apenas uma vez.
*/

programa
{
	inteiro a, b, c, x

	funcao inicio()
	{
		escreva("Primeiro valor a: ")
		leia(a)
		escreva("Segundo valor b: ")
		leia(b)
		escreva("Terceiro valor c: ")
		leia(c)

		se (a <= b e a <= c) {
			x = a
		} senao se (b <= c e b < a) {
			x = b
		} senao {
			x = c
		}

		escreva("MENOR = " + x)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 589; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */