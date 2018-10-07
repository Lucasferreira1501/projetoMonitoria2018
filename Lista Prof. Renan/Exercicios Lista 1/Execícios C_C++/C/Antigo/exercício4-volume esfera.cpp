	#include<stdio.h>// printf scanf
	#include <math.h> //pow
	#include<locale.h> //setlocale
	#define pi 3.141592653590
	// Faça um programa que leia um numero R e imprima o volume da esfera correspondente.
	int main(){
		setlocale(LC_ALL,"Portuguese");	// virgula como separador decimal na entrada e saida
		float r,vol;
		printf("Digite o raio da esfera em metros\n");
		scanf("%f",&r);
		vol= (4*pi*pow(r,3))/3;
		printf("\nO volume da esfera de raio %f metros é %f metros cubicos",r,vol);
		return 0;
	}
