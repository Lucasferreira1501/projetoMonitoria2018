      Program Media_Aritmetica_com_arquivo
      Implicit none
      Real A,B,C,Media
      write(*,*)'Leitura de n£meros armazenados num arquivo'
      Open(Unit=10,File="media.txt",Status="Old") !status old (arquivo j  deve exitir na pasta)
      read(10,*) A,B,C
      write(*,15) A,B,C
15    Format ('A=',F4.1,2x,'B=',F4.1,2x,'C=',F4.1)
      Close(10)
      Media=(A+B+C)/3
      write(*,20) A,B,C,Media
20    Format ('A media entre os numeros ',F4.1,', ',F4.1,' e ',F4.1,
     +' eh igual a ',F4.1)
      read(*,*)
      Pause
      end

