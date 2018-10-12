      Program Produto_escalar
      Implicit none
      Integer n,i
      Real U(10),V(10),Produto,Valor
      write(*,*) 'Digite a dimensao dos vetores U e V'
      read(*,*) n
C:Ler vetores U e V
      Do i=1,n,1
          write(*,*) 'Digite os valores do vetor U'
          read(*,*) U(i)
      end do
      Do i=1,n,1
          write(*,*) 'Digite os valores do vetor V'
          read(*,*) V(i)
      end do
      Produto=Valor(U,V,n,i)
      write(*,15) Produto
15    format ('Produto=',F5.2)
      pause
      end
C:Funcao do produto de dois vetores
      Real Function Valor(U1,V1,k,j)
      Implicit none
      Integer k,j
      Real U1(10),V1(10)
      Valor=0
      Do j=1,k,1
          Valor=Valor+(U1(j)*V1(j))
      end do
      write(*,10)Valor
10    format ('Valor=',F5.2)
      return
      pause
      end
      
      
