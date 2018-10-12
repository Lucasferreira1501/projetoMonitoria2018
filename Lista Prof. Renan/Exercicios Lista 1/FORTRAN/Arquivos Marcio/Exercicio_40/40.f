      Program Triangulo_de_pascal
      Implicit none
      Integer A(5,5),i,j,n
      write(*,*) 'Digite a dimensao do triangulo'
      read(*,*) n
      Open(Unit=10,File="triangulodepascal.txt",Status="Old")
      Do i=1,n,1
             A(i,1)=1
             A(i,i)=1
      End do
      Do i=3,n,1
         Do j=2,n-1,1
            A(i,j)= A(i-1,j-1)+A(i-1,j)
         end do
      end do
C:escreve triangulo
      Do i=1,n,1
         Do j=1,n,1
             write(*,*) A(i,j)
         end do
      end do
      close(10)
      pause
      end
              

