      Program Volume_da_esfera
      Implicit none
      Real V, R, Pi
      Parameter (Pi=3.14)
      Write(*,*) 'Digite o valor do raio da esfera'
      Read(*,*) R
      V= (4/3)*Pi*R
      Write(*,*) 'V=', V
      Pause
      End
      
