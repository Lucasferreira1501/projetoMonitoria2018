!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados
REAL a, b, impar, i
PRINT*,"Este programa imprime todos os números ímpares em um intervalo fechado [a,b]"
PRINT*," "
PRINT*,"Insira os valores 'a' e 'b' do intervalo fechado [a,b]"
READ(*,*)a,b
PRINT*,"Os números ímpares são:"
!====================================================================
!Processamento
DO i=a,b,1
    IF (AMOD(i,2.0).NE.0) THEN
        PRINT*,i
    END IF
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
