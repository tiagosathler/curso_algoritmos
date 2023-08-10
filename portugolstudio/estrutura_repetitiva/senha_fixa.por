/* Problema "senha_fixa"
 * Escreva um programa que repita a leitura de uma senha
 * até que ela seja válida. Para cada leitura de senha incorreta
 * informada, escrever a mensagem "Senha Invalida! Tente novamente:".
 * Quando a senha for informada corretamente deve ser impressa a mensagem
 * "Acesso Permitido" e o algoritmo encerrado.
 * Considere que a senha correta é o valor 2002.
*/

programa
{
	inteiro senha = 0, senhaCorreta = 2002

	funcao inicio()
	{
		escreva("Digite a senha: ")

		enquanto (senha != senhaCorreta) {
			leia(senha)
			se (senha != senhaCorreta) {
				escreva("Senha inválida! Digite novamente: ")
			}
		}

		escreva("Acesso permitido!\n")
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