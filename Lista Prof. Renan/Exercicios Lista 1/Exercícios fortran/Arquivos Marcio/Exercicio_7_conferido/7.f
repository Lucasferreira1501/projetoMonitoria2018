      program Tabela_ASCII
      Implicit none
      integer i
      write(*,*) 'Tabela ASCII'
      do i=0,255
         write(*,10) i,i,i,char(i)
      end do
      Pause
 10   format(i10,O10,Z10,a10)
      end
      

