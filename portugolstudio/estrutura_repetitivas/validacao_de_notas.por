/* Problema "validacao_de_nota"
 * Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 * Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
 * (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro limiteInferior = 0, limiteSuperior = 10
	real media, soma = 0.0

	funcao real leiaANota()
	{
		real nota
		leia(nota)

		enquanto (nota < limiteInferior ou nota > limiteSuperior) {
			escreva("Valor invalido! Tente novamente: ")
			leia(nota)
		} 

		retorne nota
	}
	

	funcao inicio()
	{
		escreva("Digite a primeira nota: ")
		soma += leiaANota()
		escreva("Digite a segunda nota: ")
		soma += leiaANota()

		media = mat.arredondar(soma / 2, 2)
		escreva("MEDIA = " + media)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 569; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */