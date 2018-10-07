SUBROUTINE IMPMATIN(M,L,C,F)
      INTEGER L, C, M(L,C)
      CHARACTER F*(*)
      INTEGER I, J
      PRINT*,' '
      PRINT*,F
      DO I=1,L
        PRINT*,(M(I,J),J=1,C)
      ENDDO
      RETURN
      END
