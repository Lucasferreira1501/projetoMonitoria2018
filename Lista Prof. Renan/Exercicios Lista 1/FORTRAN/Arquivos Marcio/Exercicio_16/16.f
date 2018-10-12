      Program Advinha_numero
      Implicit none
      Integer Num,k,N,LI,LS
      Num=95
      LI=1
      LS=100
      k=0
      write(*,*) 'Digite um numero entre 1 e 100 por palpite'
      Do while(N.ne.Num)
           write(*,*) 'N:'
           read(*,*) N
           k=k+1
          If(N.gt.Num) then
              LS=N
              write(*,*) 'Resposta entre',LI,'e',LS
                Else If(N.lt.Num) then
                   LI=N
                   write(*,*) 'Resposta entre',LI,'e',LS
                     Else
                       write(*,*)'Parabens, voce acertou'
          End If
      End do
      write(*,10) k
10    Format ('k=',I3, 2x,'tentativas')
      pause
      end
      
