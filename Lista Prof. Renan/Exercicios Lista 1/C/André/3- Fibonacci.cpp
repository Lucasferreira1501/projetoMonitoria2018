#include <stdio.h>
#include <conio.h>
/*Elabore um programa que imprima os n primeiros n�meros da s�rie de fibonacci:1,1,2,3,5,8,13...*/
/*A f�rmula de recorr�ncia � Ni=Ni-1 + Ni-2, onde N0=N1=1*/
int main(){
	int n, i, soma, termo1(1), termo2(1);
	
	printf("Insira o n valor da s�rie \n");
	scanf("%d",&n);
	
	if(n==1){
		printf("\n 1 \n");
	}
	if(n==2){
		printf("\n 1 \n 1 \n");
	}
	if(n>=3){
		printf("\n 1 \n 1 \n");
		for (i=3; i<=n; i++){
			soma = termo1 + termo2;
			printf("\n %d \n",soma);
			termo1 = termo2;
			termo2 = soma;
	 	}
	}
	getch();
}

