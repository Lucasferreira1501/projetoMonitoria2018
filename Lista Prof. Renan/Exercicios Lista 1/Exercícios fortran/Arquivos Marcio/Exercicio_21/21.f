      Program Numero_primo
      Implicit none
      Integer N,Retorna,ehprimo,k
      write(*,*) 'Digite um numero inteiro'
      read(*,*) N
      ehprimo= Retorna(N)
      write(*,*) ehprimo
      pause
      end
C:Funcao que verifica se o numero e primo ou nao
      Integer function Retorna(N1)
      Implicit none
      Integer N1,i
      do i=2,N1-1
        If (Mod(N1,i).eq.0) then
             Retorna=0
             Return
         End if
      end do
      Retorna=1
      return
      pause
      end
