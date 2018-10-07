#include <stdio.h>		//printf /scanf
#include <math.h>		//pow
#include <locale.h> 	//setlocale
#define pi 3.14159265

//Faça um programa que leia um numero R e imprima O volume de um esfera de raio R
//o volume da esfera correspondente.
int main(){
	setlocale(LC_CTYPE,"Portuguese"); //necessário ao print de ³ (linha 15)
	float R,Vol;
	int i;
	//printf("Digite o Raio da esfera em [mm]:\n");
	scanf("%f",&R);
	Vol=(4*pi*pow(R,3))/3;
	printf("Volume = %10.3f [mm³]",Vol);
	return 0;
}
