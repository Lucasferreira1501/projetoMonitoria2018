!      Calcula media aritm�tica

      program exercicio1_media
        implicit none
        integer i
        real*4 aux, total, media,n
        total = 0
        print*, "Digite a quantidade de numeros:"
        read(*,*) n

        do i=1,n,1
            read(*,*) aux
            total=total+aux
        end do

        media = total/n
        write(*,*) media
        pause
        end program
