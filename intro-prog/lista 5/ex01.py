"""
1. Escreva uma função que imprime a tabuada completa, de 1 a 10. Pense em uma solução que se
beneficia do uso de laços aninhados.
"""

def tabuada():
    for i in range(1, 11):
        for j in range(1, 11):
            print(f"{i} * {j} = {i * j}")
        print()

def main():
    tabuada()

main()
