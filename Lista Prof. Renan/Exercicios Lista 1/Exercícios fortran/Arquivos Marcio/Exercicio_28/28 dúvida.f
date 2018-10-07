      Program Valores_duplicados
      Implicit none
      Integer A(10),B(10),iguais,retorna,i,j,k,duplica,N,Valor
      write(*,*) 'Digite a dimensao do vetor'
      read(*,*) N
      Do i=1,N,1
            write(*,*) 'Digite os valores do vetor A'
            read(*,*) A(i)
      end do
      iguais=0
      retorna=0
      k=0
      duplica=Valor(A,B,iguais,i,j,k,retorna,N)
      write(*,*) duplica
      end
C:Criando a funcao de valores duplicados
      Integer function Valor(A1,B1,iguais1,i1,j1,k1,retorna1,N1)
      Implicit none
      Integer A1(10),B1(10),iguais1,i1,j1,k1,retorna1
      do i1=1,N1,1
         do j=1,i1-1
           If(A1(i1).eq.A1(j1))then
               retorna1=1
               return
           end if
         end do
             If(retorna1.eq.0)then
                k1=k1+1
                B1(k1)=A1(i1)
                 else
                   iguais1=iguais1+1
             end if
             retorna1=0
      end do
      Valor=retorna1
      write(*,*) 'Vetor ajustado'
      do i1=1,k1
         write(*,*) B1(i1)
      end do
      write(*,*) 'Valores removidos=',iguais1
      return
      end
