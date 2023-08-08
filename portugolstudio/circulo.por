/* Problema "circulo"
 * Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
 * círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟 . Você pode
 * usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
 * diretamente o valor 3.14159.
*/

programa
{
	inclua biblioteca Matematica --> mat
	real raio, area
	real PI = 3.141592653589793
	
	funcao inicio()
	{
		escreva("Digite o valor do raio do circulo: ")
		leia(raio)

		area = mat.arredondar(PI * mat.potencia(raio, 2), 3)

		escreva("AREA = ", area, "\n")
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