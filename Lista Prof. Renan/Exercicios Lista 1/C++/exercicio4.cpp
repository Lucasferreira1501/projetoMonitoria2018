#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.14159265

//Faça um programa que leia um numero R e imprima O volume de um esfera de raio R
//o volume da esfera correspondente.
int main(){
	setlocale(LC_ALL,"Portuguese");
	float R,Vol;
	int i;
	printf("Digite o Raio da esfera em [mm]:\n");
	scanf("%f",&R);
	Vol=(4*pi*pow(R,3))/3;

	printf("Volume = %f [mm³]",Vol);
	return 0;
}
