      Program Exercicio_31
      Implicit none
      Real R(10),S(10),V(10),Ordena,Vetor
      Integer m,n,i
      write(*,*) 'Digite a dimensao do vetor R'
      read(*,*) n
      write(*,*)'Digite a dimensao do vetor S'
      read(*,*) m
C:Ler vetor R
      Do i=1,n,1
         write(*,*) 'Digite os elementos do vetor R'
         read(*,*) R(i)
      end do
C:Ler vetor S
      Do i=1,m,1
         write(*,*) 'Digite os elementos do vetor S'
         read(*,*) S(i)
      end do
      Ordena=Vetor(
      
