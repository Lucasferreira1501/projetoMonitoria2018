!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!====================================================================
PROGRAM MultMat
IMPLICIT NONE
!====================================================================
!Entrada de dados

INTEGER A(10,10), B(10,10), C(10,10), i, j, k , m, n, o
PRINT*,"Calculo de multiplicacao de matriz: C(m,o)=A(m,n)*B(n,o)"
PRINT*," "
PRINT*,"Insira o numero de linhas e colunas de sua matriz A"
READ(*,*)m,n
PRINT*," "
PRINT*,"Insira o numero de colunas de sua matriz B"
READ(*,*)o
PRINT*," "
PRINT*,"Insira os elementos de sua matriz A por linha"
DO i=1,m
    READ(*,*)(A(i,j),j=1,n)
END DO
PRINT*," "
PRINT*,"Insira os elementos de sua matriz B por linha"
DO i=1,n
    READ(*,*)(B(i,j),j=1,o)
END DO
!====================================================================
!Processamento

DO i=1,m
    DO j=1,o
        C(i,j)=0
        DO k=1,n
            C(i,j)=C(i,j)+A(i,k)*B(k,j)
        END DO
    END DO
END DO
!====================================================================
!Saída de dados

PRINT*," "
PRINT*,"A matriz C = A*B"
DO i=1,m
    PRINT*,(C(i,j),j=1,o)
END DO
!====================================================================

STOP
END
