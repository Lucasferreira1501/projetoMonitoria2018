	#include <stdlib.h>
	#include<stdio.h>
	#include<locale.h>
	//Fa�a um programa que leia 2 n�meros reais e imprima a m�dia aritm�tica entre eles

	int main(){
		setlocale(LC_ALL,"Portuguese"); //use vigula como separador de decimais
		float m,n,media;
		printf("Programa c�lculo da m�dia aritm�tica\n");
		printf("\nDigite dois n�meros reais\n");
		scanf("%f%f",&m,&n);
		media=(m+n)/2;
		printf("\nM�dia = %f\n",media);
		system("PAUSE");
		return 0;
	}
