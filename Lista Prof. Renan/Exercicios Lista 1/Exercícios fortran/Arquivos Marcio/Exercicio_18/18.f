      Program Arredonda_numero
      Implicit none
      Integer Arredonda, Round
      Real Num
      write(*,*) 'Digite um numero para ser arredondado'
      read(*,*) Num
      Arredonda= Round(Num)
      write(*,*) Arredonda
      pause
      end
C:Fazer funcao para arredondar um valor
      Integer Function Round (Num1)
      Implicit none
      Real Num1
      Round=Num1
      If((Num1-Round).ge.0.5)then
          Num1=Num1+1
      End if
      return
      pause
      end
      
