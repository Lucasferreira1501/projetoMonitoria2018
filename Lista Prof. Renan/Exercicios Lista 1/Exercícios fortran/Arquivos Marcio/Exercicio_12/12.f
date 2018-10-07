      Program Imprimir_relatorio
      Implicit none
      Integer Nvogal,Nletras,Npalavras,k
      Character Frase*100
      Write(*,*)'Digite uma frase de um arquivo'
      Open(Unit=10,file="lerfrase.txt",status="Old")
      read(10,*) Frase
      write(*,15) Frase
15    Format ('Frase=',A100)
      Close(10)
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
      Write(*,20) Nvogal
      Write(*,20) Nletras
      Write(*,20) Npalavras
      write(*,30) Frase
20    Format ('Nvogal=',I100,2x,'Nletras=',I100,2x,'Npalavras=',I100)
30    Format ('Frase=',A100)
      pause
      end
      
       
