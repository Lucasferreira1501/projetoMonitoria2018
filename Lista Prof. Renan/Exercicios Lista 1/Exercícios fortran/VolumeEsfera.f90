!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!Turma B1
!====================================================================
!Entrada de dados
REAL r, volume
PRINT*,"Este programa calcula a volume de uma esfera em metros cúbicos m³"
PRINT*," "
PRINT*,"Insira o raio da esfera em metros"
READ(*,*)r
!====================================================================
!Processamento
volume = 4*3.14*(r**2)/3
!====================================================================
!Saída de dados
PRINT*," "
PRINT*,"O volume da esfera em m³ é:", volume
!====================================================================
!Subrotinas


!====================================================================
!Funções


!====================================================================
STOP
END
