      Program Acertos_do_aluno
      Implicit none
      Integer gabarito(3),resposta(3),i,acerto
C:Ler gabarito
      Do i=1,3,1
            write(*,*)'Digite os valores do gabarito'
            read(*,*) gabarito(i)
      end do
C:Ler respostas de um aluno
      Do i=1,3,1
            write(*,*)'Digite as respostas do aluno'
            read(*,*) resposta(i)
      end do
C:Verificar o numero de acertos
      Acerto=0
      Do i=1,3,1
            If(resposta(i).eq.gabarito(i))then
                 write(*,*) 'Resposta correta'
                 Acerto=Acerto+1
            End if
      end do
C:Imprimir o numero de acertos
      write(*,10) Acerto
10    format ('Acerto=',I2)
      pause
      end
