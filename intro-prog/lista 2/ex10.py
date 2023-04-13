"""
 Escreva um programa que lê um número de 5 dígitos e imprime cada dígito separado. Para
desmontar um número, podemos utilizar a notação posicional, isto é, o valor de cada dígito em
relação a uma potência de 10. Observe o exemplo:
O processo ocorre como uma repetição de dois passos:
a. Calcular o resto da divisão do número por 10 para obtermos o dígito da unidade.
b. Atualizar o número, dividindo-o por 10. Isso fará o número perder um dígito
"""

num = int(input("Digite um numero de 5 digitos "))

print(f"{num % 10}")
print(f"{(num // 10) % 10}")
print(f"{(num // 100) % 10}")
print(f"{(num // 1000) % 10}")
print(f"{(num // 10000) % 10}")