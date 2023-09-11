sll $t0, $s3, 2 # t0 = i* 4
add $t0, $t0, $s6  # t0 = &A[i]
lw $t1, 0($t0) # carregando a[i]

sll $t2, $s4, 2 # t2 = j* 4
add $t2, $t2, $s6  # t2 = &A[j]
lw $t3, 0($t2) # carregando a[j]

add $t4, $t1, $t3 # t4 = a[i] + a[j]
sw $t4, 48($s7)