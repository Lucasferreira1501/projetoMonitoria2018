      Program Desordena_vetor
      Implicit none
      integer a(100),N,i,j,seed,temp
      call LerVetor(N,a)
      seed = time()*100
      call srand(seed)
      do i=N,1,-1
         j=rand()*i
         temp=a(i)
         a(i)=a(j)
         a(j)=temp
      end do
      call ImprimirVetor(N,a)
      pause
      stop
      end
      
      subroutine ImprimirVetor(K,vetor)
      integer vetor(100),i, K
      write(*,*) 'Resultado:'
      do i=1,K
         write(*,*) vetor(i)
      end do
      return
      end
      
      subroutine LerVetor(K,vetor)
      integer vetor(100)
      integer i, K
      write(*,*) 'Qual o tamanho do vetor?'
      read(*,*) K
      write(*,*) 'Entre com os valores do vetor:'
      do i=1,K
         read(*,*) vetor(i)
      end do
      do i=1,k
         write(*,*)vetor(i)
      end do
      return
      end
