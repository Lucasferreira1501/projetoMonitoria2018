      Program Inverte_vetor
      Implicit none
      Integer A(100),N,i,B(100)
      write(*,*) 'Digite a dimensao do vetor'
      read(*,*) N
      Do i=1,N,1
          write(*,*) 'Digite os elementos do vetor A'
          read(*,*)   A(i)
      End do
      Do i=1,N,1
          B(i)=A(N-i+1)
      End do
      Do i=1,N,1
          write(*,*) B(i)
      end do
      pause
      end
      
          
