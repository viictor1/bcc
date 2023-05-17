"""
10. Escreva uma função que imprime uma sequência de n números randômicos entre [left, right]
(inclusivos). Ao final, a função deve devolver o maior e o menor números sorteados
"""
import random

def getMaiorMenorRandom(n, min, max):
    random.seed(1)
    for i in range(0, n):
        randomN = random.randint(min, max)
        if i == 0:
            maior = menor = randomN
        elif randomN > maior:
            maior = randomN
        elif randomN < menor:
            menor = randomN
    return maior, menor

def main():
    maior, menor = getMaiorMenorRandom(74, 1, 10000)
    print(f"Maior: {maior} Menor: {menor}")

main()