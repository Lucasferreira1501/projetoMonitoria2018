//Fa�a um programa que imprima os n�meros �mpares no intervalo fechado [a, b] (a e b escolhidos
//pelo usu�rio). Modifique o programa para que escreva os n�meros em um arquivo de sa�da.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void controleScanf (int var){
	if (var==0||var==EOF) //documenta��o de scanf // retorno caso scanf falhe
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
