      Program Media_Aritmetica
      Implicit None
      Real N1,N2,Media
      Read(*,*) N1,N2
      Media=(N1+N2)/2
      Write(*,10)N1,N2,Media
  10  format('A media entre',1x,F6.2,1x,'e',1x,F6.2,1x,'eh igual a',1x,F6.2)
      End
