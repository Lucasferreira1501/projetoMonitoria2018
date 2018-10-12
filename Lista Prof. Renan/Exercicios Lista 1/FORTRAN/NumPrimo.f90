!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados
INTEGER n, a, primos
REAL i
PRINT*,"Este programa imprime os n primeiros números primos"
PRINT*," "
PRINT*,"Insira a quantidade n de números primos desejados"
READ(*,*)n
!====================================================================
!Processamento
primos=0
DO WHILE(primos.LT.n)
    DO a=1,n
        i=FLOAT(a)
        IF(AMOD(i,2.0).NE.0)THEN
            primos=primos+1
            PRINT*,i
            ELSE
                IF (AMOD(i,3.0).NE.0) THEN
                    primos=primos+1
                    PRINT*,i
                ELSE
                    IF (AMOD(i,5.0).NE.0) THEN
                        primos=primos+1
                        PRINT*,i
                    ELSE
                        IF (AMOD(i,7.0).NE.0) THEN
                            primos=primos+1
                            PRINT*,i
                        ENDIF
                    ENDIF
                ENDIF
        END IF
    END DO
END DO
!====================================================================
!Saída de dados
PRINT*,"teste"
PRINT*,MOD(1,5)
PRINT*,AMOD(5.0,2.0)
!====================================================================
!Subrotinas


!====================================================================
!Funções


!====================================================================
STOP
END
