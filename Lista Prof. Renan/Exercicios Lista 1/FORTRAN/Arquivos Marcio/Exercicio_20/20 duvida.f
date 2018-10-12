      Program Verifica_triangulo
      Implicit none
      Real a,b,c,Ver,Tipo
      write(*,*) 'Digite os lados do triangulo'
      read (*,*) a,b,c
      Ver =Tipo(a,b,c)
      write(*,*) Ver
      end
C:Funcao que verifica o tipo de triangulo
      Real Function Tipo(a1,b1,c1)
      Implicit none
      Real a1,b1,c1,Tipo1
      If((a1+b1).le.c1.or.(a1+c1).le.b1.or.(b1+c1).le.a1) then
           Tipo1= 0
           write(*,*) 'Nao forma triangulo'
      End if
      If((a1.eq.b1).or.(a1.eq.c1).or.(b1.eq.c1))then
            Tipo1=2
            write(*,*) 'Triangulo isosceles'
              Else
                If((a1.eq.b1).and.(a1.eq.c1).and.(b1.eq.c1))then
                  Tipo1= 3
                  write(*,*) 'Triangulo isosceles'
                     Else
                        Tipo1=1
                        write(*,*) 'Triangulo qualquer'
      End if
      Tipo=Tipo1
      write(*,*) Tipo
      return
      pause
      end
      
