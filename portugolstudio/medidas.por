/* Problema "medidas"
 * Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
*  a) a área do quadrado que tem lado A
*  b) a área do triângulo retângulo que base A e altura B
*  c) a área do trapézio que tem bases A e B, e altura C
*/

programa
{
	inclua biblioteca Matematica --> mat
	real a, b, c, areaQuadrado, areaTrianqulo, areaTrapezio

	funcao inicio()
	{
		escreva("Digite a medida A: ")
		leia(a)

		escreva("Digite a medida B: ")
		leia(b)

		escreva("Digite a medida C: ")
		leia(c)

		areaQuadrado = mat.arredondar(mat.potencia(a, 2), 4)
		areaTrianqulo = mat.arredondar(a * b / 2.0, 4)
		areaTrapezio = mat.arredondar((a + b) * c / 2, 4)

		escreva("AREA DO QUADRADO = ", areaQuadrado, "\n")
		escreva("AREA DO TRIANGULO = ", areaTrianqulo, "\n")
		escreva("AREA DO TRAPEZIO = ", areaTrapezio, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 726; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */