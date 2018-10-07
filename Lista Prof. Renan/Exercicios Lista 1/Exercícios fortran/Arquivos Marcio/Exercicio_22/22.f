      program MediaGeometrica
      real*4 a0, b0, a, b
      write(*,*) 'Entre com os valores para calcular a media:'
      read(*,*) a0, b0
      do i=1,1000
         a=sqrt(a0*b0)
         b=(a0+b0)/2
         a0=a
         b0=b
      end do
      write(*,4) a, b
4     Format ('a=',F4.2,2x,'b=',F4.2)
      pause
      stop
      end
      
