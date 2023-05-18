"""
8. Escreva uma função que imprime um Triângulo de Floyd de m linhas. Observe o padrão numérico:
"""

def floyd(m):
    num = 1
    for i in range(m + 1):
        for j in range(i):
            print(f"{num} ", end="")
            num += 1
        print()

def main():
    floyd(5)

main()