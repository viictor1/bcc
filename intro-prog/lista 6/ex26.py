"""
26. Escreva uma função que recebe duas listas v1 e v2, ordenadas crescentemente. A função deve
mesclar ordenadamente os conteúdos de v1 e v2, colocando-os em uma nova lista, a ser
retornada. OBS: não é permitido o uso de list.sort() e do operador +.
"""

def listMerge(v1, v2):
    v3 = v1.copy()
    j = 0

    for i in range(len(v2)):
        while j < len(v3) and v2[i] > v3[j]:
            j += 1
        v3.insert(j, v2[i])
    
    return v3

def main():
    print(f"{listMerge([1, 3, 4, 7, 9, 10], [2, 3, 5, 7, 7, 14])}")

main()