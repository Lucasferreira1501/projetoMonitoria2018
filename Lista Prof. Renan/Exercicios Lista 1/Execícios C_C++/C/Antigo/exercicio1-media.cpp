	#include <stdlib.h>
	#include<stdio.h>
	#include<locale.h>
	//Faça um programa que leia 2 números reais e imprima a média aritmética entre eles

	int main(){
		setlocale(LC_ALL,"Portuguese"); //use vigula como separador de decimais
		float m,n,media;
		printf("Programa cálculo da média aritmética\n");
		printf("\nDigite dois números reais\n");
		scanf("%f%f",&m,&n);
		media=(m+n)/2;
		printf("\nMédia = %f\n",media);
		system("PAUSE");
		return 0;
	}
