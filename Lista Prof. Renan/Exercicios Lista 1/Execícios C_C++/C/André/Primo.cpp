#include <math.h>
#include <stdio.h>
#include <conio.h>

int main (){
	int i(1), j, cont(0), nprimo, checaprimo;
	printf ("Insira a quantidade de numeros primos que voce quer \n");
	scanf ("%d",&nprimo);
	if(nprimo == 0){
		printf("Nao ha primos");
	}
	else{
		while (cont < nprimo){
			checaprimo = 1;
			for (j=2; j<=((i/2)+1); j++){ //Mudar 'for' para 'while' com duas condições
				if(i%j == 0){
					checaprimo = 0;
				}
			}
			if (checaprimo == 1){
				printf("%d\n", i);
				cont++;
			}
			i++;
		}
	}
getch ();
return (0);	
}
