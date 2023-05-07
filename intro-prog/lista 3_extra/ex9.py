"""
9. Escreva um programa que, dado um número inteiro positivo, o imprime em notação binária. O
processo de obtenção é similar à extrair os dígitos de um número: divisões sucessivas por 2, até
que o quociente seja 0 (zero). A cada divisão, o resto indica um dígito binário. Entretanto, assim
como no algoritmo de obter os dígitos, os dígitos binários estarão em ordem inversa. Logo, será
preciso remontar o número binário (na ordem correta) em uma variável inteira. Observe o exemplo:
"""

n = int(input("Digite um numero "))
binario = invertido = digito = 0

while n != 0:
    digito = n % 2
    invertido = invertido * 10 + digito
    n = n // 2

while invertido != 0:
    digito = invertido % 10
    binario = binario * 10 + digito
    invertido //= 10

print(f"{binario}")