!====================================================================
!Andr� Fernandes Gon�alves
!Matr�cula 114038073
!Linguagens de Programa��o para Engenharia El�trica
!====================================================================
PROGRAM NumVog
IMPLICIT NONE
!====================================================================
!Entrada de dados

INTEGER vogais
CHARACTER palavra*30
PRINT*,"Conta o n�mero de vogais em sua palavra"
PRINT*," "
PRINT*,"Insira a sua palavra"
READ(*,*)palavra
!====================================================================
!Processamento

vogais=0
DO i=1,LEN_TRIM(palavra)
    SELECT CASE(palavra(i:i))
    CASE('A','E','I','O','U','a','e','i','o','u')
        vogais=vogais+1
    END SELECT
END DO
!====================================================================
!Sa�da de dados
PRINT*," "
PRINT*,"O numero de vogais",vogais

!====================================================================
STOP
END
