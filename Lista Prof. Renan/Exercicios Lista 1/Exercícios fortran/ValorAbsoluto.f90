!====================================================================
!Andr� Fernandes Gon�alves
!Matr�cula 114038073
!Linguagens de Programa��o para Engenharia El�trica
!Turma B1
!====================================================================
!Entrada de dados
REAL V(50), maior
INTEGER n
PRINT*,"Este programa l� at� 50 n�meros e imprime o de maior valor absoluto"
PRINT*," "
PRINT*,"Insira a quantidade de n�meros a serem comparados"
READ(*,*)n
PRINT*," "
PRINT*,"Insira os n�meros a serem comparados"
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
!Sa�da de dados
PRINT*," "
PRINT*,"O n�mero de maior valor absolute �", maior
!====================================================================
!Subrotinas


!====================================================================
!Fun��es


!====================================================================
STOP
END
