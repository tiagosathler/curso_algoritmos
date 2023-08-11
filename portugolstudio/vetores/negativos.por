/* Problema "negativos"
 * Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
 * e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/

programa
{
	inteiro n
	inteiro vetor[10]
	cadeia numerosNegativos = ""

	funcao inicio()
	{

		escreva("Quantos numeros voce vai digitar? ")
		leia(n)

		se (n > 10) {
			n = 10
		}

		para (inteiro i = 0; i < n; i++) {
			escreva("Digite um numero ("+ (i + 1) + " de " + n +  "): ")
			leia(vetor[i])
			se (vetor[i] < 0) {
				numerosNegativos += vetor[i] + "\n"
			}
		}

		escreva("NUMEROS NEGATIVOS: \n" + numerosNegativos)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 469; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */