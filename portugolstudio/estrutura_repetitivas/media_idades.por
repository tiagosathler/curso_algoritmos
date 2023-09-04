/* Problema "media_idades"
 * Faça um programa para ler um número indeterminado de dados,
 * contendo cada um, a idade de um indivíduo.
 * O último dado, que não entrará nos cálculos,
 * contém um valor de idade negativa. Calcular
 * e imprimir a idade média deste grupo de indivíduos.
 * Se for entrado um valor negativo na primeira vez,
 * mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/

programa
{
	inclua biblioteca Matematica --> mat
	inteiro idade = 0, contagem = 0
	real media, soma = 0.0

	funcao inicio()
	{
		escreva("Digite as idades (negativo para sair):\n")

		leia(idade)

		enquanto (idade >= 0) {
			contagem += 1
			soma += idade
			leia(idade)
		}

		se (contagem != 0) {
			media = mat.arredondar(soma / contagem, 2)
			escreva("MEDIA = " + media)
		} senao {
			escreva("IMPOSSIVEL CALCULAR")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 658; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */