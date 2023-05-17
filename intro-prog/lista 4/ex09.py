"""
9. Utilizando a função do exercício anterior, escreva uma função que imprime uma caixa, recebendo
como parâmetros:
a. Largura e altura da caixa (width e height);
b. O caractere de preenchimento da caixa (fill);
c. O caractere das bordas da caixa (edge).
"""

def printLine(largura, fill, edge):
    for i in range(0, largura):
        if i == 0 or i == largura - 1:
            print(edge, end="")
        else:
            print(fill, end="")
    print("")

def printBox(height, width, fill, edge):
    for i in range(0, height):
        if i == 0 or i == height - 1:
            printLine(width, "-", edge)
        else:
            printLine(width, fill, "|")

def main():
    printBox(5, 10, "o", "#")

main()
    
