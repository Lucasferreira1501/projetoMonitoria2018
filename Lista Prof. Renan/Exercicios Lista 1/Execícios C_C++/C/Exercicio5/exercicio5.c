//Faça um programa que leia 3 números e imprima o número de maior valor absoluto
#include <stdio.h>
#include <math.h>

int main(){
	float num,maior;
	int i=0;
	//printf("Digite um numero real:\n");
	scanf("%f",&num);
	maior=abs(num);
	while(i<2){
		//printf("Digite um numero real:\n");
		scanf("%f",&num);
		if(maior<abs(num))
			maior=abs(num);
		i++;
	}
	printf("Maior valor absoluto inserido = %10.3f",maior);
	return 0;
}
