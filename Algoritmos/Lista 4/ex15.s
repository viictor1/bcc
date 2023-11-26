$s0 = registrador base da matriz
$s1 = tamanho da matriz
$s2 = onde vai guardar o retorno

main:
	lw $t0, 0($s0) //load na matriz
    
	add $a0, $0, $t0  //adcionando os parametros da funcao
	add $a1, $0, $s1

	jal checkIdentity
	sw $v0, 0($s2)
	j End


checkIdentity:
	//$s3 = i
	//#s4 = j
	//$s5 = index

    addi $sp, $sp, -8     # alocar 8 bytes da pilha (2 palavra)
    sw $s1, 4($sp)
    sw $s0, 0($sp)

    LOOPOuter:
    slt $t0, $a1, $s3   // i < tamanho?
    beq $t0, $0, setReturn1

    LoopInner:
        slt $t0, $s4, $a1  // i < tamanho?
        bne $t0, $0, EndOuter

        lw $s0, 0($a0)  //carregando a matriz

        sub $t0, $s3, $s4 //Verificando se i - j = 0
        bne $t0, $0, segundoIf

        // i == j
        addi $t1, $s0, -1    //verificando se m[i][j] == 1
        bne $t1, $0, setReturn0  // se não for retorna 0
        j EndInner

        segundoIf:
        bne $s0, $0, setReturn0  // se chegou aqui i!=j, entao se m[i][j] != 0, retorna 0


        EndInner:
            addi $a0, $a0, 4  //deslocando o indice para a prox posição
            addi $s4, $s4, 1 // j++
            j LoopInner

    EndOuter:
    addi $s3, $s3, 1  //i++
    j LOOPOuter


setReturn0:
    addu $v0, $0, $0
    j Exit

setReturn1:
    addiu $v0, $0, 1
    j Exit

Exit:
	lw $s1, 4($sp)
	lw $s0, 0($sp)   	
	addi $sp, $sp, 8 	 
	jr $ra

End:

