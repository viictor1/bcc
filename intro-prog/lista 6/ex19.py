"""
19. Escreva uma função que recebe uma lista days de tamanho 7 que exibe um histograma da
variação da temperatura durante a semana. A lista days armazena as temperaturas para cada dia
da semana, iniciando por domingo. Por exemplo, se as temperaturas em days forem [19, 21, 25,
22, 20, 17 e 15] graus celsius, a função deverá exibir:
"""

def histogram(days):
    dayWeek = ['D', 'S', 'T', 'Q', 'Q', 'S', 'S']
    for i in range(len(days)):
        print(f"{dayWeek[i]} ", end="")
        for j in range(days[i]):
            print("> ", end="")
        print("")

def main():
    histogram([19, 21, 25, 22, 20, 17, 15])

main()