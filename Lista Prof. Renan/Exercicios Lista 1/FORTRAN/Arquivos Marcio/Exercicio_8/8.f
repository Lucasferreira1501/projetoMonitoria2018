      Program Numeros_primos
      Implicit none
      Integer P, N,i
      Logical eprimo
      write(*,*)'Imprimir os 10 primeiros numeros primos'
      N=10
      i=1
      P=0
      Do while(P.lt.N)
         If(eprimo(i))then
                 write(*,*) i
                 P=P+1
         End If
         i=i+1
      End do
      Pause
      End
      Logical Function eprimo(k)
      Integer k,i
      Do i=2,k-1,1
         If(Mod(k,i).eq.0)then
             eprimo= .false.
             return
         End if
      End do
      eprimo= .true.
      return
      Pause
      end

