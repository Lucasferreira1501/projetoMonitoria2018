!====================================================================
!Andr� Fernandes Gon�alves
!Matr�cula 114038073
!Linguagens de Programa��o para Engenharia El�trica
!Turma B1
!====================================================================
!Entrada de dados
REAL V(50), media, soma
INTEGER i
OPEN (UNIT=1, FILE="entrada.txt", STATUS="old")
READ(1,*)n
READ(1,*)(V(i),i=1,n)
PRINT*,'Este programa calcula a m�dia entre at� 50 n�meros reais do arquivo "arquivo.txt"'
PRINT*,' '
!====================================================================
!Processamento
media = 0
soma = 0
DO i=1,n
    soma = soma + V(i)
END DO
media = soma/n
!====================================================================
!Sa�da de dados
PRINT*,' '
PRINT*,'A m�dia calculada foi:',media
!====================================================================
!Subrotinas


!====================================================================
!Fun��es


!====================================================================
STOP
END
