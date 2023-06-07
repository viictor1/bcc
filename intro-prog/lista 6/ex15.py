"""
15. Escreva uma função que recebe uma lista vet e um elemento elem. A função deve remover todas
as ocorrências de elem de vet. Obs: Não é permitido o uso de list.index() e list.remove()
"""

def removeAll(ls, el):
    i = 0
    while i < len(ls):
        if el == ls[i]:  #Pop muda os elemntos da array de posição
            ls.pop(i)
        else:
            i += 1
    return ls

def main():
    ls = [1, 2, 2, 2]
    print(f"{removeAll(ls, 2)}")

main()