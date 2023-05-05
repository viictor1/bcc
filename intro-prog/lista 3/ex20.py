"""
20. A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Os dois primeiros termos são iguais a 1 e, a
partir do terceiro, o termo é dado pela soma dos dois termos anteriores. Dado um número n≥3,
exiba o n-ésimo termo da série de Fibonacci
"""

n = int(input("Digite um numero maior que 3 "))
a = b = 1
i = 0

print(f"{a} {b} ", end="")
while i < n:
    c = a + b
    a = b
    b = c
    print(f"{c} ", end="")
    i += 1
