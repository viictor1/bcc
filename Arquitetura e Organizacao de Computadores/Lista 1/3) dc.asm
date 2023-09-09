sub $t0, $s3, $s4 # t0 = i - j
sll $t1, $t0, 2 # t1 = (i-j) * 4
add $t2, $t1, $s6 #posicao a[i-j]
lw $t3, 0($t2) #carregando a[i-j]

sw $t3, 32($s7) # b[8] = a[i-j]