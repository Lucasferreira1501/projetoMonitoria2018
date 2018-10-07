!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados
REAL V(50), maior
INTEGER n
PRINT*,"Este programa lê até 50 números e imprime o de maior valor absoluto"
PRINT*," "
PRINT*,"Insira a quantidade de números a serem comparados"
READ(*,*)n
PRINT*," "
PRINT*,"Insira os números a serem comparados"
READ(*,*)(V(i),i=1,n)
!====================================================================
!Processamento
maior=0
DO i=1,n
    IF (ABS(maior).LT.ABS(V(i))) THEN
        maior=V(i)
    END IF
END DO
!====================================================================
!Saída de dados
PRINT*," "
PRINT*,"O número de maior valor absolute é", maior
!====================================================================
!Subrotinas


!====================================================================
!Funções


!====================================================================
STOP
END
