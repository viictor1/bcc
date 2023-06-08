"""
16. Escreva uma função que recebe uma lista vet e inverte os seus elementos na própria lista. Obs:
Não é permitido o uso de list.reverse().
"""

def reverseList(ls):
    copy = ls.copy()
    for i in range(len(ls)):
        ls[i] = copy[len(ls) - i - 1]
        ls[len(ls) - i - 1] = copy[i]
    return ls

def main():
    print(f"{reverseList([1, 2, 3, 4, 5])}")

main()