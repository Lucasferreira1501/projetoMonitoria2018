PROGRAM func_sim_nao
INTEGER sim_nao, resposta
CHARACTER letra

resposta = sim_nao(letra)

PRINT*,resposta

ENDPROGRAM

INTEGER FUNCTION sim_nao(z)
INTEGER valor
CHARACTER z

PRINT*, "Insira s ou n"
READ(*,*) z

DO WHILE ((z.NE."s").AND.(z.NE."n"))
    PRINT*, "Insira s ou n"
    READ(*,*) z
END DO

IF (z.EQ."s")THEN
    valor = 1
ELSE IF (z.EQ."n") THEN
    valor = 0
END IF

sim_nao = valor

RETURN
END FUNCTION
