!====================================================================
!Andr� Fernandes Gon�alves
!Matr�cula 114038073
!Linguagens de Programa��o para Engenharia El�trica
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
PRINT*,"Este programa mostra o n�mero na posi��o n da sequ�ncia de fibonacci"
PRINT*," "
PRINT*,"Insira a posi��o do n�mero desejado"
READ(*,*)p

!====================================================================
!Processamento
resultado=fibonacci(p)


!====================================================================
!Sa�da de dados
PRINT*,"O n�mero �:",resultado


!====================================================================
!Subrotinas


!====================================================================
!Fun��es


!====================================================================
STOP
END
