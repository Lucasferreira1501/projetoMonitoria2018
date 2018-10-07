      Program Fibonacci_por_funcao
      Implicit none
      Integer A,B,Soma,i,N,Serie
      write(*,*)'Digite um valor'
      read(*,*) N
      N=N-2
      A=1
      B=1
      Serie=Soma(N)
      write(*,*) Serie
      Pause
      end
C:Obter uma fun‡Æo de Fibonacci
      Integer Function Soma(N1)
      implicit none
      Integer A1,B1,Soma1,j,N1
      A1=1
      B1=1
      write(*,*)A1
      write(*,*)B1
      do j=1,N1,1
          Soma1=A1+B1
          write(*,*) Soma1
          A1=B1
          B1=Soma1
      end do
      Soma=Soma1
      return
      pause
      end
