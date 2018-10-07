      Program Numeros_primos
      Implicit none
      Integer P, N,i
      Logical eprimo
      write(*,*)'Digite a quantidade de primos em que se quer obter'
      read(*,*) N
      i=1
      P=0
      Open(Unit=10,File='numeros_impares.txt',Status='New')
      Do while(P.lt.N)
         If(eprimo(i))then
                 write(*,*) i
                 P=P+1
         End If
         i=i+1
      End do
      Close(10)
      Write(*,*) 'Arquivo txt criado com sucesso'
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

