/* Problema "consumo"
 * Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
 * combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
 * médio do carro, com três casas decimais.
*/

programa
{
	inclua biblioteca Matematica --> mat
	real combustivelGasto, consumoMedio
	inteiro distancia
	
	funcao inicio()
	{
		escreva("Distancia percorrida: ")
		leia(distancia)

		escreva("Combustível gasto: ")
		leia(combustivelGasto)

		consumoMedio = mat.arredondar(distancia / combustivelGasto, 3)

		escreva("Consumo medio = ", consumoMedio, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 360; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */