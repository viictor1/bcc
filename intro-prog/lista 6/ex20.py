"""
20. Chamando a função desenvolvida no exercício anterior, escreva uma função que recebe a lista
days e exibe:
a) As temperaturas média, mínima, máxima;
b) O histograma.
"""

def histogram(days):
    dayWeek = ['D', 'S', 'T', 'Q', 'Q', 'S', 'S']
    for i in range(len(days)):
        print(f"{dayWeek[i]} ", end="")
        for j in range(days[i]):
            print("> ", end="")
        print("")

def tempReports(days):
    media = 0

    histogram(days)

    for i in range(len(days)):
        media += days[i]
    
    media /= len(days)
    print("Média: %.1f" % media)
    print(f"Min: {min(days)}")
    print(f"Média: {max(days)}")

def main():
    tempReports([19, 21, 25, 22, 20, 17, 15])

main()