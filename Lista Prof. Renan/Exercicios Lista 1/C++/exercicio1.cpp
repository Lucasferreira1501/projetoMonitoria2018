#include <stdio.h>
//Fa�a um programa que leia 2 n�meros reais e imprima a m�dia aritm�tica entre eles.
int main(){
	float a,b;
	printf("Digite um numero real\n");
	scanf("%f",&a);
	printf("Digite outro numero real\n");
	scanf("%f",&b);
	printf("media = %f",(a+b)/2);
	return 0;
}
