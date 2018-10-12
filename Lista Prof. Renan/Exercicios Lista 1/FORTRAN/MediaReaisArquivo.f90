!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados
REAL V(50), media, soma
INTEGER i
OPEN (UNIT=1, FILE="entrada.txt", STATUS="old")
READ(1,*)n
READ(1,*)(V(i),i=1,n)
PRINT*,'Este programa calcula a média entre até 50 números reais do arquivo "arquivo.txt"'
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
!Saída de dados
PRINT*,' '
PRINT*,'A média calculada foi:',media
!====================================================================
!Subrotinas


!====================================================================
!Funções


!====================================================================
STOP
END
