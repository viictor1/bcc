"""
21. Em uma eleição existem quatro candidatos. Os votos são informados através de códigos. Os dados
utilizados para a contagem dos votos obedecem à seguinte codificação:
a. 1, 2, 3, 4: voto para os respectivos candidatos
b. 5 = voto nulo
c. 6 = votam em branco
Escreva um programa que faz a leitura de uma sequência de votos (até que zero seja digitado). Ao
final, o programa deve calcular e mostrar os totais de:
a. votos por candidato
b. votos nulos
c. Votos em branco
OBS: os votos em branco somam para o candidato que tiver mais votos (ao final).
"""

voto = int(input("Digite seu voto "))
c1 = c2 = c3 = c4 = nulo = branco = 0

while voto != 0:
    if voto == 1:
        c1 += 1
    elif voto == 2:
        c2 += 1
    elif voto == 3:
        c3 += 1
    elif voto == 4:
        c4 += 1
    elif voto == 5:
        nulo += 1
    elif voto == 6:
        branco += 1
    voto = int(input("Digite seu voto "))

if c1 > c2 and c1 > c3 and c1 > c4:
    c1 += branco
elif c2 > c1 and c2 > c3 and c2 > c4:
    c2 += branco
elif c3 > c1 and c3 > c2 and c3 > c4:
    c3 += branco
elif c4 > c1 and c4 > c2 and c4 > c3:
    c4 += branco

print(f"""
Candidato 1: {c1}
Candidato 2: {c2}
Candidato 3: {c3}
Candidato 4: {c4}
branco: {branco}
Candidato 1: {nulo}
""")