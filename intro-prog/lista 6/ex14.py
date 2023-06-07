"""
14. Escreva uma função que recebe uma lista vet e um elemento elem. A função deve remover todas
as ocorrências de elem de vet. Dica: list.remove()
"""

def removeAll(ls:list, el):
    for i in range(len(ls)):
        if el in ls:
            ls.remove(el)
        else:
            break
    return ls

def main():
    print(f"{removeAll([1, 2, 2, 2], 2)}")

main()