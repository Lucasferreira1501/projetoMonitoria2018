!====================================================================
!Andr� Fernandes Gon�alves
!Matr�cula 114038073
!Linguagens de Programa��o para Engenharia El�trica
!Turma B1
!====================================================================
!Entrada de dados
INTEGER i
CHARACTER caracter
PRINT*,"Este programa imprime todos os caracteres ASCII, seguidos de seus valores inteiros e hexadecimais"
PRINT*," "
!====================================================================
!Processamento
DO i=1,255
    caracter=CHAR(i)
    WRITE(*,'(a4,i4,z4)'), caracter, i, i
END DO
!====================================================================
!Sa�da de dados

!====================================================================
!Subrotinas


!====================================================================
!Fun��es


!====================================================================
STOP
END
