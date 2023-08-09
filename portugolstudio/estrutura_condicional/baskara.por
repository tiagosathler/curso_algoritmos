/* Problema "baskara"
 * Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
 * de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
 * conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
*/

programa
{
	inclua biblioteca Matematica --> mat
	real a, b, c, delta, x1, x2

	funcao inicio()
	{
		escreva("Coeficiente a: ")
		leia(a)
		escreva("Coeficiente b: ")
		leia(b)
		escreva("Coeficiente c: ")
		leia(c)

		delta = mat.potencia(b, 2.0) - 4 * a * c

		se(delta >= 0) {
			x1 = (-b + mat.raiz(delta, 2.0)) / (2 * a)
			x1 = mat.arredondar(x1, 4)
			
			x2 = (-b - mat.raiz(delta, 2.0)) / (2 * a)
			x2 = mat.arredondar(x2, 4)
			
			escreva("X1 = " + x1)
			escreva("\nX2 = " + x2)
		}
		senao {
			escreva("Esta equacao nao possui raizes reais")
		}
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