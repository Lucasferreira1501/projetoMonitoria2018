      Program MatrizDamas
      Implicit none
      integer tab(8,8),N,i,j,damas
      logical VerificarLinha, VerificarColuna
      N=8
      do i=1,N
         do j=1,N
            tab(i,j)=0
         end do
      end do
      do i=1,N
         do j=1,N
            tab(i,j)=0
         end do
      end do
      write(*,*) VerificarLinha(tab,N,1)
      write(*,*) VerificarColuna(tab,N,1)
      pause
      stop
      end
      logical function VerificarLinha(matriz,n,linha)
      integer matriz(8,8),j,n,linha
      do j=1,n
         if(matriz(linha,j).EQ.1)then
            VerificarLinha = .true.
            return
         end if
      end do
      VerificarLinha = .false.
      return
      end
      logical function VerificarColuna(matriz,n,coluna)
      integer matriz(8,8),i,n,coluna
      do i=1,n
         if(matriz(i,coluna).EQ.1)then
            VerificarColuna = .true.
            return
         end if
      end do
      VerificarColuna = .false.
      return
      end
      logical function VerificarDiagonal(matriz,n,linha,coluna)
      integer matriz(8,8),i,j,n,linha,coluna
      do i=1,n
         if(matriz(i,coluna).EQ.1)then
            VerificarColuna = .true.
            return
         end if
      end do
      VerificarColuna = .false.
      return
      end
