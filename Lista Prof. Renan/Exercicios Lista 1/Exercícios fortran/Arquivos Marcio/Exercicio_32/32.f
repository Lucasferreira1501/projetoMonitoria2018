      program Intersecao
      real a(100), b(100), inter(200)
      integer N, M, K
      write(*,*) 'Entre com o primeiro vetor'
      call LerVetor(N,a)
      write(*,*) 'Entre com o segundo vetor'
      call LerVetor(M,b)
      call Intersec(N,a,M,b,inter,K)
      call Ordenar(K,inter)
      call ImprimirVetor(K,inter)
      pause
      end
C:Ordena vetor
      subroutine Ordenar(K, vetor)
      real vetor(200), temp
      integer K, i, j
      do i=1,K-1
         do j=1,K-1
            if(vetor(j+1).LT.vetor(j))then
               temp = vetor(j)
               vetor(j) = vetor(j+1)
               vetor(j+1) = temp
            end if
         end do
      end do
      return
      end
C Intersecao de vetor
      subroutine Intersec(N,a,M,b,vetor,K)
      real a(100), b(100), vetor(200)
      integer N,M,K,i
      K=0
      do i=1,N
         do j=1,M
            if(a(i).EQ.b(j))then
               K=K+1
               vetor(K)=a(i)
            end if
         end do
      end do
      return
      end
C:Imprime vetor
      subroutine ImprimirVetor(K,vetor)
      real vetor(200)
      integer i, K
      write(*,*) 'Resultado:'
      do i=1,K
         write(*,*) vetor(i)
      end do
      return
      end
C:Le vetor
      subroutine LerVetor(K,vetor)
      real vetor(100)
      integer i, K
      write(*,*) 'Qual o tamanho do vetor?'
      read(*,*) K
      write(*,*) 'Entre com os valores do vetor:'
      do i=1,K
         read(*,*) vetor(i)
      end do
      return
      end
