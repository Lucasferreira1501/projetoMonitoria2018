      Program Media_Aritmetica_modificado
      Implicit none
      Integer N, i
      Real Media, Soma, aux
      read (*,*) N
      Soma= 0
      Do i= 1, N, 1
            read(*,*) aux
            Soma= Soma+aux
      End do
      Media=Soma/N
      Write(*,10) Media
10    Format('A media dos numeros eh ',F6.2)
      End
