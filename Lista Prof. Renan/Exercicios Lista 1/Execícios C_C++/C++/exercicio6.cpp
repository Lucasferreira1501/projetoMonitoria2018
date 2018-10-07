#include <stdio.h>
#include <math.h>
//Faça um programa que leia n números e imprima o número de maior valor absoluto
int main(){
	float num,aux;
	int i=0,n;
	printf("Digite a quantidade de numeros:\n");
	scanf("%d",&n);
	printf("Digite o primeiro numero real:\n");
	scanf("%f",&num);
	aux=abs(num);
	
	while(i<n){
		printf("Digite o primeiro numero real:\n");
		scanf("%f",&num);
		if(aux<abs(num))
			aux=abs(num);
		i++;
	}
	printf("Maior valor absoluto = %f",aux);
	return 0;

}
