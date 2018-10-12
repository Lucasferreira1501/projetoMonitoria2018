
      program exercicio1_media
        implicit none
        real num1
        real num2
        real media*4

        read(*,*) num1
        read(*,*) num2

        media = (num1+num2)/2

        write(*,*)media
        end program

