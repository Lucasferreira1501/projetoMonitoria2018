!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados

INTEGER FUNCTION fibonacci(n)
    IMPLICIT NONE
    INTEGER f(50),n,i,resultado
    f(1)=1
    f(2)=1
    resultado=0
    DO i=3,n
        resultado=f(i-1)+f(i-2)
    END DO
    fibonacci=resultado
    RETURN


INTEGER p
PRINT*,"Este programa mostra o número na posição n da sequência de fibonacci"
PRINT*," "
PRINT*,"Insira a posição do número desejado"
READ(*,*)p

!====================================================================
!Processamento
resultado=fibonacci(p)


!====================================================================
!Saída de dados
PRINT*,"O número é:",resultado


!====================================================================
!Subrotinas


!====================================================================
!Funções


!====================================================================
STOP
END
