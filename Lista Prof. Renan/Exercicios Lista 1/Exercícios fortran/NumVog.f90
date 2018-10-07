!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!====================================================================
PROGRAM NumVog
IMPLICIT NONE
!====================================================================
!Entrada de dados

INTEGER vogais
CHARACTER palavra*30
PRINT*,"Conta o número de vogais em sua palavra"
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
!Saída de dados
PRINT*," "
PRINT*,"O numero de vogais",vogais

!====================================================================
STOP
END
