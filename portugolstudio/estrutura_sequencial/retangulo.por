/* Problema "retangulo"
 * Fazer um programa para ler as medidas da base e altura de um retângulo.
 * Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais,
*/

programa
{
	inclua biblioteca Matematica --> mat
	real base, altura, area, perimetro, diagonal
	
	funcao inicio()
	{
		escreva("Base do retangulo: ")
		leia(base)

		escreva("Altura do retangulo: ")
		leia(altura)

		area = mat.arredondar(base * altura, 4)
		perimetro = mat.arredondar(2 * (base + altura), 4)
		diagonal = mat.arredondar(mat.raiz(mat.potencia(base, 2.0) + mat.potencia(altura, 2.0), 2.0), 4)

		escreva("AREA = ", area, "\n")
		escreva("PERIMETRO = ", perimetro, "\n")
		escreva("DIAGONAL = ", diagonal, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 739; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */