sll $t0, $s4, 2 # t0 = j* 4
add $t1, $t0, $s6  #t2 = &A[j]

sll $t2, $s3, 2 # t2 = i*4
add $t3, $t2, $s7 # t3 = &B[i]
sw $t1, 0($t3) # b[i] = a[j] 