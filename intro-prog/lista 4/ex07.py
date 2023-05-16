"""
7. Escreva uma função que imprime N números inteiros aleatórios. A função receberá como
parâmetro a quantidade de números (n) e os limites para sorteio (min e max). Os números devem
ser randomizados entre [min, max]. Utilize a semente 1 antes de gerar os números, isto é,
random.seed(1).
"""
import random

def printRandom(n, min, max):
    random.seed(1)
    for i in range(1, n+1):
        print(random.randint(min, max))

def main():
    print(printRandom(5, -10, 10))

main()