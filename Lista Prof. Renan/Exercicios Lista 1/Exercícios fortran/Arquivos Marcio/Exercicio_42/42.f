      Program Analise_combinatoria
      Implicit none
      Integer n,k,d,fatn,fatk,fatd, i, Combinacao,valor
      write(*,*)'Digite valores para n e k, onde n>k'
      read(*,*) n,k
      fatn=1
      fatk=1
      fatd=1
      d=n-k
C:fatorial de n
      do i=1,n,1
         If(n.gt.0) then
            fatn=fatn*i
               Else
                 If(n.eq.0)then
                   fatn=1
                 end if
         end if
      end do
      write(*,*) 'fatn=',fatn
C:fatorial de k
      do i=1,k,1
         If(k.gt.0)then
           fatk=fatk*i
               Else
                 If(k.eq.0)then
                   fatk=1
                 end if
         end if
      end do
      write(*,*) 'fatk=',fatk
C:fatorial de n-k
      do i=1,d,1
         If(d.gt.0)then
           fatd=fatd*i
               Else
                 If(d.eq.0)then
                   fatd=1
                 end if
         end if
      end do
      write(*,*)'fatd=',fatd
      Combinacao=valor(fatn,fatd,fatk)
      write(*,*) 'Combinacao=',Combinacao
      pause
      end
C:Funcao para analise combinatoria
      Integer function valor(fatn1,fatd1,fatk1)
      Implicit none
      Integer fatn1,fatd1,fatk1,A
      A=fatn1/(fatk1*fatd1)
      valor=A
      write(*,*) 'valor=',valor
      pause
      return
      end
      
