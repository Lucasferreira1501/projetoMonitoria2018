      Program Imprimir_relatorio
      Implicit none
      Integer Nvogal,Nletras,Npalavras,k
      Character Frase*100
      Write(*,*)'Digite uma frase'
      read(*,*) Frase
      Nvogal=0
      Nletras=0
      Npalavras=0
      Do k=1,N,1
        If((Frase(k:k).eq.'a').or.(Frase(k:k).eq.'e').or.(Frase(k:k).eq.
     # 'i').or.(Frase(k:k).eq.'o').or.(Frase(i:i).eq.'u')then
            Nvogal= Nvogal+1
            Nletras=Nletras+1
             Else If (Frase(k:k).ne.' ')then
                Nletras=Nletras+1
                Else If(Frase(k:k).ne.Frase(k+1:k+1))then
                    Npalavras=Npalavras+1
        End If
      End do
      Write(*,10) Nvogal
      Write(*,10) Nletras
      Write(*,10) Npalavras
      write(*,20) Frase
10    Format ('Nvogal=',I100,2x,'Nletras=',I100,2x,'Npalavras=',I100)
20    Format ('Frase=',A100)
      pause
      end
      
       
