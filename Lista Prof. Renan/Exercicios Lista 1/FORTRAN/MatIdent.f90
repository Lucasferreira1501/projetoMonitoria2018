PROGRAM MatIdent
IMPLICIT NONE
INTEGER n, i, j, Matriz(50,50), identidade
WRITE(*,*)'O programa checa se a mtriz � identidade'
WRITE(*,*)'Insira a ordem de sua matriz'
READ(*,*)n
WRITE(*,*)'Insira os elementos de sua matriz por linha'
DO i=1,n
    READ(*,*)(Matriz(i,j),j=1,n)
END DO
identidade = 1
DO i=1,n
    DO j=1,n
        IF (i.EQ.j) THEN    !Checando se a diagonal principal � composta por 1
            SELECT CASE(Matriz(i,j))
                CASE( :0 )
                    identidade = 0
                CASE( 2: )
                    identidade = 0
            END SELECT
        ELSE                !Checando se os elementos fora da diagonal principal s�o 0
            SELECT CASE(Matriz(i,j))
                CASE( :-1)
                    identidade = 0
                CASE( 1: )
                    identidade = 0
            END SELECT
        END IF
    END DO
END DO
SELECT CASE (identidade)
    CASE(1)
        WRITE(*,*)'A matriz � identidade'
    CASE(0)
        WRITE(*,*)'A matriz n�o � identidade'
END SELECT
STOP
END
