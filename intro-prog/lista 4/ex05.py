"""
5. Escreva uma função que calcula e devolve a soma dos fatoriais até um dado número. Você
pode escrever uma solução que utiliza 2 laços aninhados (laço dentro de laço).
"""

def somaFatorial(n):
    sum = 0
    fatTotal = 0
    for i in range(1, n + 1):
        fatNum = 1
        for j in range(1, i + 1):
            fatNum *= j
        fatTotal += fatNum
    return fatTotal
          

def main():
    print(somaFatorial(3))

main()