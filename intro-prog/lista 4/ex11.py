"""
11. Escreva uma função que imprime uma sequência de n números randômicos entre [left, right]
(inclusivos). Ao final, a função deve devolver a contagem de pares e primos. Considere 0 (zero)
como par. OBS: utilize a função is_prime(x) do exercício 3 para simplificar a verificação de número
primo.
"""

import random

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

def countPrimeEvenNumbers(n, left, right):
    random.seed(1)
    evenCounter = 0
    primeCounter = 0
    for i in range(1, n+1):
        randomN = random.randint(left, right)
        print(f"{randomN}")
        if randomN % 2 == 0:
            evenCounter += 1
        if isPrime(randomN) == True:
            primeCounter += 1
    return primeCounter, evenCounter

def main():
    n = 5
    prime, even = countPrimeEvenNumbers(n, 0, 10)
    print(f'total: {n}, even: {even}, odd: {n-even}, primes: {prime}')

main()