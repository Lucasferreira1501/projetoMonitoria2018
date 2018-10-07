  SUBROUTINE ReadMatrix(M,L,C,N,F)
      INTEGER L, C, M(L,C), N
      CHARACTER F*(*)
      INTEGER I, J
      PRINT*,' '
      PRINT*,F
      DO I=1,L
        READ(N,*)(M(I,J),J=1,C)
      ENDDO
      RETURN
      END
