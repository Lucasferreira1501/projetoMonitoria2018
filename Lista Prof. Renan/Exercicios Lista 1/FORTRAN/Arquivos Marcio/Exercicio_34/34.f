      program Procura_ocorrencia
      character(100) v,t
      integer N,M,i,j,count
      write(*,*) 'Digite a frase a ser analisada:'
      read(*,'(a)') v
      N = len_trim(v)
      write(*,*) 'Digite o termo de busca:'
      read(*,'(a)') t
      M = len_trim(t)
      count = -1
      do i=1,N
         do j=1,M
            if(v(i+j-1:i+j-1).NE.t(j:j))then
               exit
            end if
            if(j.EQ.M)then
               count = i-1
            end if
         end do
         if(count.NE.-1)then
            exit
         end if
      end do
      write(*,*) 'Encontrado em:', count
      pause
      stop
      end
