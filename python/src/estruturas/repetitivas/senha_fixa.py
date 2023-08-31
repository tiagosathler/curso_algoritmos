""" Problema "senha_fixa"
Escreva um programa que repita a leitura de uma senha até que ela seja válida.
Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:".
Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado.
Considere que a senha correta é o valor 2002.
"""

PASSWORD = 2002


def senha_fixa() -> None:
    password = int(input("Digite a senha: "))

    while password != PASSWORD:
        password = int(input("Senha inválida! Digite novamente: "))

    else:
        print("Acesso permitido!")


if __name__ == "__main__":
    senha_fixa()
