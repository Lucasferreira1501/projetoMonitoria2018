      Program Media_Aritmetica_modificado
      Implicit none
      Integer N, i
      Real Media, Soma, aux
      Write(*,*) 'Digite um valor inteiro'
      read (*,*) N
      Soma= 0
      Do i= 1, N, 1
            write(*,*) 'Digite um valor'
            read(*,*) aux
            Soma= Soma+aux
      End do
      Media=Soma/N
      Write(*,10) Media
10    Format('Media=',F5.2)
      End
