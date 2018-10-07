      Program Media_do_maior_e_menor
      Implicit none
      Integer i,N
      Real Media,Maior,Menor,A(100)
      write(*,*) 'Digite a dimensao do vetor'
      read(*,*) N
      Do i=1,N,1
          write(*,*) 'Digite valores do vetor A'
          read(*,*) A(i)
      End do
      Maior=A(1)
      Do i=2,N,1
         If(A(i).gt.Maior)then
             Maior=A(i)
          Else
            If(A(i).lt.Maior)then
               Menor=A(i)
             end if
         End if
      end do
      Media=(Maior+Menor)/2
      write(*,10) Media
10    format ('Media=',F4.2)
      pause
      end
      
