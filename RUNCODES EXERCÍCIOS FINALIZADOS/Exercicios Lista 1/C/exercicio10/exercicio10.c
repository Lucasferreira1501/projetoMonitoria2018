//Faça um programa que imprima os números ímpares no intervalo fechado [a, b] (a e b escolhidos
//pelo usuário). Modifique o programa para que escreva os números em um arquivo de saída.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void controleScanf (int var){
	if (var==0||var==EOF) //documentação de scanf // retorno caso scanf falhe
	{	
		printf("ERRO DE LEITURA");
		exit(1); 		// termina programa
	}
	return;
}
int main(){
	
	int i,var;
	float a,b;
	
	var = scanf("%f",&a);
	controleScanf (var);
	a = ceil(a);
	var = scanf("%f",&b);
	controleScanf (var);
	b = ceil(b);
	
	for (i=a;i<=b;i++){
	   	if ((i%2)!=0){
			printf("%d ",i);		// Impares
		}
	}
	return 0;

}
