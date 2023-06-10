"""
27. Escreva uma função que recebe uma lista contendo números inteiros. A função deve determinar o
segmento de soma máxima, iniciando na posição 0. Ao final, deve imprimir a soma máxima.
"""

def maxSumSlice(v):
    sum = 0
    maxSum = 0
    for i in range(len(v), 0, -1):
        for j in range(i):
            sum += v[j]
        if i == 0:
            maxSum = sum
        elif sum > maxSum:
            maxSum = sum
        sum = 0
    
    return maxSum

def main():
    print(f"{maxSumSlice([5, 2,-2,-7, 3, 14, 10, -3, 9,-6, 4, 1])}")

main()