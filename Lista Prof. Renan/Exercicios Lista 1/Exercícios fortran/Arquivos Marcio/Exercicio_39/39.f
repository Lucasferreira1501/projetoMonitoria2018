      Program Produto_de_matrizes
      Implicit none
      Real A(10,10),B(10,10),C(10,10),Produto,Matriz,acumula,k
      Integer i,j,m
      write(*,*)'Digite a ordem das matrizes'
      read(*,*) m
C:Ler matrizes
C:Matriz A
      Do i=1,m,1
         Do j=1,m,1
            write(*,*)'Digite os valores da matriz A'
            read(*,*) A(i,j)
         End do
      End do
C:Matriz B
      Do i=1,m,1
         Do j=1,m,1
            write(*,*)'Digite valores da matriz B'
            read(*,*) B(i,j)
         End do
      End do
      acumula=0
      Produto=Matriz(A,B,C,i,j,m,acumula)
      write(*,*) Produto
      pause
      end
C:Funcao de produto de matrizes
      Real function Matriz(A1,B1,C1,i1,j1,m1,acumula1)
      Implicit none
      Real A1(10,10),B1(10,10),C1(10,10)
      Integer i1,j1,m1,acumula1,k1
      Do i1=1,m1,1
          Do j1=1,m1,1
              Acumula1=0
                 Do k1=1,m1,1
                    acumula1=acumula1+A1(i1,k1)*B1(k1,j1)
                 end do
                 C1(i1,j1)=acumula1
          end do
      end do
      Do i1=1,m1,1
         Do j1=1,m1,1
          write(*,*) C1(i1,j1)
         end do
      end do
      return
      pause
      end
      

