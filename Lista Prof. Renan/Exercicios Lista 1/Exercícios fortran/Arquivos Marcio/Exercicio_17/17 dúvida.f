      Program Numero_extenso
      Implicit none
      Integer Num,i
      Character Extenso*50
      write(*,*) 'Digite um numero'
      read(*,*) Num
      If((Num.ge.0).and.(Num.le.1000))then
          Extenso='Num'
      End if
      write(*,10) Num, Extenso
10    Format('Num=',I3,2x,'Extenso=',A50)
      pause
      end
      
      


      
