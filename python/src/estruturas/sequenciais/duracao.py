""" Problema "duracao"
Fazer um programa para ler uma duração de tempo em segundos,
daí imprimir na tela esta duração no formato: horas:minutos:segundos.
"""


def duracao() -> None:
    duration = int(input("Digite a duração em segundos: "))

    hours = duration // 3600
    minutes = duration % 3600 // 60
    seconds = (duration % 3600) % 60

    print(f"{hours} : {minutes:2d} : {seconds:2d}")


if __name__ == "__main__":
    duracao()
