!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados
CHARACTER frase*100
INTEGER palavras, vogais, letras
PRINT*,"Este programa analisa o número de palavras, de vogais e de letras em uma frase"
PRINT*,"Insira a frase"
READ(*,*)frase
!====================================================================
!Processamento
palavras=1
vogais=0
letras=0
    DO i=1,LEN_TRIM(frase)
        SELECTCASE(frase(i:i))
        CASE(ACHAR(0),ACHAR(32))
            palavras=palavras+1
        CASE('a','e','i','o','u','A','E','I','O','U')
            vogais=vogais+1
        END SELECT
        IF (frase(i:i).NE.ACHAR(0)) THEN
            letras = letras+1
        END IF
    END DO
PRINT*,palavras, vogais, letras
STOP
END
