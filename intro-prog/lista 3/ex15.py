"""
15. Escreva um programa que exibe o primeiro e o último dígitos de um número inteiro.
"""

n = int(input("Digite um numero "))
print(f"Ultimo digito: {n % 10}")


while n // 10 > 0:
    dig = n % 10
    n //= 10

print(f"Primeiro digito: {n%10}")