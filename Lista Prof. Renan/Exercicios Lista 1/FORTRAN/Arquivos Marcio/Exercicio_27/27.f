      Program Menorvalor
      Implicit none
      Integer i,N
      Real V(10),Menor,Retorna,Valor
      write(*,*) 'Digite a dimensao do vetor V'
      read(*,*) N
      Do i=1,N,1
            write(*,*) 'Digite valores do vetor V'
            read(*,*) V(i)
      end do
      Retorna= Valor(V,Menor,i,N)
      write(*,*) Retorna
      pause
      end
C:Funcao do menor valor do vetor
      Real function Valor(V1,Menor1,j,N1)
      Implicit none
      Integer j,N1
      Real V1(10),Menor1
      Menor1=V1(1)
      Do j=2,N1,1
         If(V1(j).lt.Menor1)then
             Menor1=V1(j)
         end if
      end do
      Valor=Menor1
      return
      pause
      end
      
      
