"""
1. Escreva um programa que faz a leitura de um valor N e imprime N linhas de texto exibindo o
número da linha corrente. Exemplo:
"""

n = int(input("Digite o numero de linhas "))

for i in range(1, n+1):
    print(f"Linha {i}")
