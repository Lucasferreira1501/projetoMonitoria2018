!====================================================================
!André Fernandes Gonçalves
!Matrícula 114038073
!Linguagens de Programação para Engenharia Elétrica
!====================================================================
PROGRAM OrdVet
IMPLICIT NONE
!====================================================================
!Entrada de dados

INTEGER V(20), i, n, Aux, trocas, k
PRINT*,"Insira o numero de elementos de seu vetor"
READ(*,*)n
PRINT*,"Insira os elementos de seu vetor"
READ(*,*)(V(i),i=1,n)
!====================================================================
!Processamento

k=(n-1)
trocas=1
DO WHILE(trocas.GT.0)
    trocas=0
    DO i=1,k
        IF(V(i).GT.V(i+1))THEN
            Aux=V(i)
            V(i)=V(i+1)
            V(i+1)=Aux
            trocas=1
        END IF
    END DO
    k=k-1
END DO

!====================================================================
!Saída de dados

PRINT*,"O seu vetor ordenado em ordem crescente"
PRINT*,(V(i),i=1,n)

!====================================================================
STOP
END
