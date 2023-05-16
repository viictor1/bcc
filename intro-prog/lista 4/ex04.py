"""
4. Utilizando a função is_prime(x) do exercício anterior, escreva uma função que imprime os n
primeiros números primos.
"""

def isPrime(n):
    if n <= 1:
        return False
    if n % 2 == 0 and n != 2:
        return False
    else:
        div = 3
        while div <= n ** (1/2):
            if n % div == 0:
                return False
            div += 2    
    return True

def printPrimes(n):
    i = 0
    numPrimo = 0
    while numPrimo < n:
        if isPrime(i) == True:
            print(i)
            numPrimo += 1          
        i += 1

def main():
    printPrimes(5)

main()