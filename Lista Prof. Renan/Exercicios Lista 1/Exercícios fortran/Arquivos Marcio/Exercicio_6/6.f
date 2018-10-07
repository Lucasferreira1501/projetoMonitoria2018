      Program Maior_valor
      Implicit none
      Real A(100), Maior
      Integer K,j
      Write(*,*) 'Digite quantos valores se quer manipular'
      Read(*,*) K
      Maior=0
      Do j=1,K,1
          write(*,*) 'Digite o valor',j,':'
          Read(*,*) A(j)
           If(A(j).lt.0) then
                A(j)=-A(j)
           End If
            If(A(j).gt.Maior) then
                Maior=A(j)
            End If
      End do
      Write(*,10) Maior
10    Format ('Maior=',F5.2,2x,'Maior valor')
      Pause
      End
      
