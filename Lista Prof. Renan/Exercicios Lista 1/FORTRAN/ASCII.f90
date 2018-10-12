!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
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
!Saída de dados

!====================================================================
!Subrotinas


!====================================================================
!Funções


!====================================================================
STOP
END
