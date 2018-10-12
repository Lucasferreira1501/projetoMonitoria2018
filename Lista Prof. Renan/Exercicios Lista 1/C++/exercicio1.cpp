#include <stdio.h>
//Faça um programa que leia 2 números reais e imprima a média aritmética entre eles.
int main(){
	float a,b;
	printf("Digite um numero real\n");
	scanf("%f",&a);
	printf("Digite outro numero real\n");
	scanf("%f",&b);
	printf("media = %f",(a+b)/2);
	return 0;
}
