/* Problema "terreno"
 * Fazer um programa para ler as medidas da largura e
 * comprimento de um terreno retangular com uma casa decimal,
 * bem como o valor do metro quadrado do terreno com duas casas decimais.
 * Em seguida, o programa deve mostrar o valor da área do terreno, 
 * bem como o valor do preço do terreno, ambos com duas casas decimais,
 * conforme exemplo.
*/

programa
{
	inclua biblioteca Matematica --> mat
	real largura, comprimento, valorMetroQuadrado, area, preco
	
	funcao inicio()
	{
		escreva("Digite a largura do terreno: ")
		leia(largura)

		escreva("Digite o comprimento do terreno: ")
		leia(comprimento)

		escreva("Digite o valor do metro quadrado: ")
		leia(valorMetroQuadrado)

		area = mat.arredondar(largura * comprimento, 1)
		preco = mat.arredondar(area * valorMetroQuadrado, 2)

		escreva("Área do terreno: ", area, "\n")
		escreva("Preço do terreno: ", preco, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 487; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */