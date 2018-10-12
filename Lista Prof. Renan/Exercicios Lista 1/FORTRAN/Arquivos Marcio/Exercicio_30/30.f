      Program Ordena_vetor_com_rotina
      Implicit none
      Integer V(10),i,N,Aux,k
      write(*,*) 'Digite a dimensao do vetor'
      read(*,*) N
      do i=1,N,1
          write(*,*) 'Digite os valores do vetor V'
          read(*,*) V(i)
      end do
      Call Ordenavetor(V,i,N,Aux,k)
      pause
      end
C:Sub-rotina que ordena vetor
      Subroutine Ordenavetor(V1,j,N1,Aux1,k1)
      Implicit none
      Integer V1(10),j,N1,Aux1,k1
      do j=1,N1,1
        do k1=1,N1-1
         If(V1(k1).gt.V1(k1+1))then
            Aux1=V1(k1+1)
            V1(k1+1)=V1(k1)
            V1(k1)= Aux1
         end if
        end do
      end do
      do j=1,N1,1
         write(*,*) 'V1(j)=',V1(j)
      end do
      return
      pause
      end
      
