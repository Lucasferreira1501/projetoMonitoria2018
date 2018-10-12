PROGRAM func_sim_nao
INTEGER sim_nao, resposta
CHARACTER letra

PRINT*, "Insira s ou n"
READ(*,*) letra

DO WHILE ((letra.NE."s").AND.(letra.NE."n"))
    PRINT*, "Insira s ou n"
    READ(*,*) letra
END DO

resposta = sim_nao(letra)

PRINT*,resposta

ENDPROGRAM

INTEGER FUNCTION sim_nao(z)
INTEGER valor
CHARACTER z
    IF (z.EQ."s")THEN
        valor = 1
    ELSE IF (z.EQ."n") THEN
        valor = 0
    END IF
sim_nao = valor
RETURN
END FUNCTION
