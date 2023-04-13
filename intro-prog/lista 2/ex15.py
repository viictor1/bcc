"""
15. Escreva uma calculadora simples: faz a leitura de um operador char (+ - * / %), bem como, os
valores inteiros A e B. Então, o programa deve mostrar a expressão e o resultado (com dois dígitos
de precisão).
Exemplo:
[ CALCULADORA SIMPLEX ]
Operador> /
Número01> 20
Número02> 3
Expressão:
20 / 3 = 6.67
"""

operador = input("Digite um operador: ")
num1 = int(input("Digite num1 "))
num2 = int(input("Digite num2 "))

if operador == '+':
    print(f"{num1} + {num2} = {num1 + num2}")
elif operador == '-':
    print(f"{num1} - {num2} = {num1 - num2}")
elif operador == '*':
    print(f"{num1} * {num2} = {num1 * num2}")
elif operador == '/':
    print(f"{num1} / {num2} = {num1 / num2}")
elif operador == '%':
    print(f"{num1} % {num2} = {num1 % num2}")