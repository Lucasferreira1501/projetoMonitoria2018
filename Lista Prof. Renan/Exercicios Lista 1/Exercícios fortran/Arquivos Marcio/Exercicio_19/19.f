      Program Sim_ou_nao
      Implicit none
      Character entrada
      Integer Pergunta
      write(*,*) 'Deseja prosseguir???'
      read(*,*) entrada
      If(Pergunta(entrada).eq.2)then
           write(*,*) 'Digite outra letra'
      else
            write(*,*) Pergunta(entrada)
      end if
      pause
      end
C:Criar funcao
      Integer function Pergunta(entrada1)
      Implicit none
      Character entrada1*1
      If(entrada1.eq.'s') then
         Pergunta= 1
             Else If(entrada1.eq.'n') then
                     Pergunta=0
                        Else
                            Pergunta=2
      end if
      return
      end
      
      
      
