"""
6. Escreva uma nova versão da função do exercício anterior, agora utilizando apenas um único laço
para realizar a operação solicitada na função. Dica: observe a representação dos cálculos.
"""

def somaFatorial(n):
    sum = 0
    fatTotal = 0
    fatNum = 1
    for i in range(1, n + 1):
        fatNum *= i
        fatTotal += fatNum
    return fatTotal
          

def main():
    print(somaFatorial(3))

main()