"""
8. Escreva um programa que, dado dois números inteiros positivos (A e B), imprime o MMC (Mínimo
Múltiplo Comum) entre ambos. O MMC é o menor número que resulta da multiplicação de A e B
por um número (não necessariamente igual para ambos). Dica: o mínimo múltiplo comum entre A e
B pode ser encontrado verificando se algum múltiplo do MAIOR(A, B) é divisível pelo MENOR(A,
B). Sempre há um MMC entre dois números quaisquer.
"""

a = int(input("Digite um numero "))
b = int(input("Digite um numero "))
mmc = 0
i = 1

if a > b:
    maior = a
    menor = b
else:
    maior = b
    menor = a

while mmc == 0:
    if (maior * i) % menor == 0:
        mmc = maior * i
        break
    i += 1

print(f"O mmc entre {a} e {b} é {mmc}")