!====================================================================
!Andr� Fernandes Gon�alves
!Matr�cula 114038073
!Linguagens de Programa��o para Engenharia El�trica
!Turma B1
!====================================================================
!Entrada de dados
REAL a, b, impar, i
PRINT*,"Este programa imprime todos os n�meros �mpares em um intervalo fechado [a,b]"
PRINT*," "
PRINT*,"Insira os valores 'a' e 'b' do intervalo fechado [a,b]"
READ(*,*)a,b
PRINT*,"Os n�meros �mpares s�o:"
!====================================================================
!Processamento
DO i=a,b,1
    IF (AMOD(i,2.0).NE.0) THEN
        PRINT*,i
    END IF
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
