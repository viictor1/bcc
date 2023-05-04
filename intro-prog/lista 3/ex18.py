"""
18. O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. Dado um número n, calcule
seu quadrado usando a soma de ímpares.
"""

n = int(input("Digite um numero "))
i = quadrado = 0
impar = 1

while i < n:
    quadrado += impar
    impar += 2
    i += 1
print(f"{quadrado}")