      Program Maior_valor
      Implicit none
      Real N1,N2,N3
      Write(*,*) 'Digite trˆs valores'
      Read(*,*) N1,N2,N3
      If(Abs(N1).gt.Abs(N2).and.Abs(N1).gt.Abs(N3)) then
           Write(*,10) N1
10         Format ('N1=',F6.1,2x,'Maior valor')
              Else
               If(Abs(N2).gt.Abs(N1).and.Abs(N2).gt.Abs(N3))then
                 Write(*,15) N2
15               Format ('N2=',F6.1,2x,'Maior valor')
                   Else
                    If(Abs(N3).gt.Abs(N1).and.Abs(N3).gt.Abs(N2))then
                     Write(*,20) N3
20                   Format ('N3=',F6.1,2x,'Maior valor')
                       Else
                         Write(*,*) 'Nao imprimir valor'
                    End if
               End if
      End if
      Pause
      End
      
