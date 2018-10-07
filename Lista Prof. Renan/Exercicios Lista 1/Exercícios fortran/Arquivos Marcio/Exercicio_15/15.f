      program Raizes
      real a, b, c, Delta, X1, X2
      write(*,*) 'Digite os argumentos'
      read(*,*) a,b,c
      Delta = b**2-4*a*c
      if(delta.GT.0)then
       x1 = (-b+sqrt(delta))/(2*a)
       x2 = (-b-sqrt(delta))/(2*a)
       write(*,*) 'x1=',x1
       write(*,*) 'x2=',x2
          else If(Delta.eq.0)then
            x1 = (-b)/(2*a)
            x2 = x1
            write(*,*) 'x1=x2=',x1
               else
                 x1 = (-b)/(2*a)
                 x2 = sqrt(-delta)/(2*a)
                 write(*,'(a3,f7.2,a3,f7.2,a2)') 'x1=',x1,' + ',x2,'i'
                 write(*,'(a3,f7.2,a3,f7.2,a2)') 'x2=',x1,' - ',x2,'i'
      End If
      Pause
      end
