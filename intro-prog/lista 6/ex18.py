"""
18. Escreva uma função que recebe um valor inteiro value e uma lista notes com as possíveis
cédulas. A função deve imprimir a quantidade mínima de cédulas equivalente ao valor.
Dica: use uma lista auxiliar count para armazenar a contagem de cada cédula.
"""

def minBills(value, notas):
    count = []
    for i in range(max(notas) + 1):
        count.append(0)

    while value > 0:
        for i in range(len(notas) - 1, -1, -1):
            if value - notas[i] >= 0:
                value -= notas[i]
                count[notas[i]] += 1
                break
    
    for i in range(len(count)):
        if count[i] > 0:
            print(f"Notas de {i}: {count[i]}")

def main():
    minBills(209, [1, 5, 10, 50, 100])

main()