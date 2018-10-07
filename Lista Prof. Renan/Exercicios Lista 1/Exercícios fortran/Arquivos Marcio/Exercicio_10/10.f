      Program Numeros_impares
      Implicit none
      Integer N1,N2,i
      write(*,*) 'Digite dois valores'
      read(*,*) N1,N2
      Do i=N1,N2,1
         If(Mod(i,2).ne.0)then
            write(*,*) i
          End if
      End do
C:Escrevendo os numeros impares em um arquivo de saida
      Open (Unit=10,File="numerosimpares.txt",Status="Old")
      write(10,20) i
20    Format ('i=',I5)
      Close(10)
      Pause
      end
      
      
