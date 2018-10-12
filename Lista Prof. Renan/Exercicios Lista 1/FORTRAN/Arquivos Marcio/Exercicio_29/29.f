      Program Inserir_valor
      Implicit none
      Integer N,i,pos
      Real A(10),valor,temp
      write(*,*) 'Digite a dimensao do vetor'
      read(*,*) N
      do i=1,N
           write(*,*) 'Digite os valores do vetor A'
           read(*,*) A(i)
      end do
      write(*,*) 'Digite qual valor para inserir e qual posicao'
      read(*,*) valor,pos
      call Inserevalor(A,valor,temp,N,i,pos)
      pause
      end
C:Criar subrotina para inserir valor
      Subroutine Inserevalor (A1,valor1,temp1,N1,j,pos1)
      Implicit none
      Integer N1,j,pos1
      Real A1(10),valor1,temp1
      Do j=pos1,N1+1,1
         temp1=A1(j)
         A1(j)=valor1
         valor1=temp1
      end do
      write(*,*) 'Novo vetor'
      Do j=1,N1+1
         write(*,*) A1(j)
      end do
      return
      pause
      end
