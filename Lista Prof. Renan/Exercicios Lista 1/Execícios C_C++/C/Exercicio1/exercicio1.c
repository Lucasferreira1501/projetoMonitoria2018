//Fa�a um programa que leia 2 n�meros reais e imprima a m�dia aritm�tica entre eles.

#include <stdio.h>		//printf scanf

int main(){
	float a,b;
	//printf("Digite um numero real\n");
	scanf("%f",&a);									//scanf recebe como argumento o endere�o da variavel a
	//printf("Digite outro numero real\n");
	scanf("%f",&b);									//scanf recebe como argumento o endere�o da variavel a
	printf("Media = %8.3f",(a+b)/2);
	return 0;
}

