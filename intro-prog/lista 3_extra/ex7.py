"""
7. Escreva um programa que, dado dois números inteiros positivos (A e B), imprime o MDC (Máximo
Divisor Comum) entre ambos. O MDC é o maior número que divide A e B (divisão exata, de resto
zero). Dica: o máximo divisor comum entre A e B está, necessariamente, entre 2 e o menor entre A
e B, isto é, MENOR(A, B). Se você não encontrar um divisor comum entre A e B, então MDC = 1.
"""

a = int(input("Digite um numero "))
b = int(input("Digite um numero "))

if a > b:
    menor = b
else:
    menor = a

for i in range(1, menor):
    if a % i == 0 and b % i == 0:
        mdc = i

print(f"Máximo divisor comum entre {a} e {b}: {mdc}")