      Program Numeros_de_Fibonacci
      Implicit none
      Integer A,B,Soma,N,i
      write(*,*) 'Digite a quantidade de termos na serie de Fibonacci'
      read(*,*) N
      N=N-2
      A=1
      B=1
      write(*,*) A
      write(*,*) B
      do i=1,N,1
          Soma=A+B
          write(*,*) Soma
          A=B
          B=Soma
      end do
      pause
      end
