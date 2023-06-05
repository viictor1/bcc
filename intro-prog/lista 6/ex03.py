"""
3. Escreva uma função que recebe uma lista vet contendo números inteiros. A função deve modificar
a lista, invertendo o sinal dos números negativos, passando-os para positivo.
"""

def setPositive(ls):
    for i in range(len(ls)):
        if ls[i] < 0:
            ls[i] = -ls[i]
    return ls

def main():
    print(f"{setPositive([0, 5, 6 ,-2, -12])}")

main()