/* Problema "media_ponderada"
 * Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir.
 * Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular
 * e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3
 * e o terceiro valor tem peso 5.
 * Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso,
 * dividida pela soma dos pesos.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro n
	real a, b, c, media, pesoA = 2.0, pesoB = 3.0, pesoC = 5.0

	funcao inicio()
	{
		escreva("Quantos numeros voce vai digitar? ")
		leia(n)

		para (inteiro i = 1; i <= n; i++)
		{
			escreva("Digite tres numeros:\n")
			leia(a)
			leia(b)
			leia(c)

			media = (a * pesoA + b * pesoB + c * pesoC) / (pesoA + pesoB + pesoC)
			media = mat.arredondar(media, 1)
			escreva("MEDIA = " + media + "\n")
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