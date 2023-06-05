"""
8. Escreva uma função que recebe uma lista vet e retorna uma outra lista, com os primos em vet.
"""

def getPrimes(ls):
    primes = []
    for elem in ls:
        if elem > 1:
            isPrime = True
            for i in range(2, int(elem ** 0.5) + 1):
                if elem % i == 0:
                    isPrime = False
                    break
            if isPrime:
                primes.append(elem)
    return primes

def main():
    print(f"{getPrimes([0, 1, 2, 3, 4, 5, 6, 7, 13, 24])}")

main()