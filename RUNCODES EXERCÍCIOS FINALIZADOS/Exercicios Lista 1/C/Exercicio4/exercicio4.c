//Faça um programa que leia um numero R e imprima O volume de um esfera de raio R
//o volume da esfera correspondente.

#include <stdio.h>		//printf /scanf
#include <stdlib.h>		//exit()
#include <math.h>		//pow
#define pi 3.14159265

void controleScanf (int var){
	if (var==0||var==EOF)
	{	//documentação de scanf // retorno caso scanf falhe
		printf("ERRO DE LEITURA");
		exit(1); 		// termina programa
	}
	return;
}
int main(){
	float R,Vol;
	int var;
	var = scanf("%f",&R);
	controleScanf(var);
	Vol=(4*pi*pow(R,3))/3;
	printf("%10.3f",Vol);
	return 0;
}
