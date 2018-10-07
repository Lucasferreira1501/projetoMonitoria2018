      Program Ler_e_escrever_vetor
      Implicit none
      Integer V(100),N,i
      write(*,*)'Digite a dimensao do vetor V'
      read(*,*) N
      Call Lervetor(V,N,i)
      Call Escrevervetor(V,N,i)
      pause
      end
C:Ler o vetor V
      Subroutine Lervetor(V1,N1,j)
      Implicit none
      Integer V1(100),N1,j
      Do j=1,N1,1
          write(*,*) 'Digite os valores do vetor'
          read(*,*) V1(j)
      end do
      return
      pause
      end
C:Escrever vetor
      Subroutine Escrevervetor(V1,N1,j)
      Implicit none
      Integer V1(100),N1,j
      Do j=1,N1,1
            write(*,*) 'Imprimir valores do vetor'
            write(*,10) V1(j)
10          format ('V1(j)=',100(I5))
      end do
      return
      pause
      end
      
