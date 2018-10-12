PROGRAM MatPerm
IMPLICIT NONE
INTEGER i, j, k, l, Matriz(50,50), linha, coluna, perm
WRITE(*,*)'O programa checa se a matriz e permutacao'
WRITE(*,*)'Insira o numero de linhas e colunas de sua matriz'
READ(*,*)linha,coluna
WRITE(*,*)'Insira os elementos de sua matriz por linha'
DO i = 1,linha
    READ(*,*)(Matriz(i,j),j = 1,coluna)
END DO

perm = 1

DO i = 1,linha
    DO j = 1,coluna
        SELECT CASE(Matriz(i,j))
            CASE( :-1 )
                perm = 0
            CASE( 2: )
                perm = 0
            CASE(1)
                DO k = (i+1), linha
                    IF (Matriz(i,j).EQ.Matriz(k,j)) THEN
                        perm = 0
                    END IF
                END DO
                DO l = (j+1), coluna
                    IF (Matriz(i,j).EQ.Matriz(i,l)) THEN
                        perm = 0
                    END IF
                END DO
        END SELECT
    END DO
END DO
SELECT CASE(perm)
    CASE(1)
        WRITE(*,*)'A matriz e permutacao'
    CASE(0)
        WRITE(*,*)'A matriz nao e permutacao'
END SELECT
END PROGRAM
