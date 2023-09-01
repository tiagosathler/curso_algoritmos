""" Problema "tempo_de_jogo"
 Leia a hora inicial e a hora const de um jogo.
 A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro,
 tendo uma duração mínima de 1 hora e máxima de 24 horas.
"""


def tempo_de_jogo() -> None:
    start = int(input("Hora inicial: "))
    end = int(input("Hora const: "))

    duration = end - start

    if start > end:
        duration += 24

    print(f"O JOGO DUROU {duration} HORA(S)")


if __name__ == "__main__":
    tempo_de_jogo()
