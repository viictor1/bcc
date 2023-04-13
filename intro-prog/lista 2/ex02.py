"""
2. Escreva um programa que lê um número x do terminal e informa seu valor absoluto |x|, isto é:
a. |x| = x, se x > 0
b. |x| = -x, se x < 0
"""

x = int(input("Digite um numero: "))

if x > 0:
    print(f"|x| = {x}")
else:
    print(f"|x| = {-x}")