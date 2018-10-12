//Faça um programa que leia n números e imprima o número de maior valor absoluto
// usuário determine a quantidade de números manipulados
//=================================================================================
#include <stdio.h>
#include <math.h>

int main(){
	float num,maior;
	int i=1,n;
	//printf("Digite a quantidade de numeros:\n");
	scanf("%d",&n);
	//printf("Digite um numero real:\n");
	scanf("%f",&num);
	maior=abs(num);
	
	while(i<n){
		//printf("Digite um numero real:\n");
		scanf("%f",&num);
		if(maior<abs(num))
			maior=abs(num);
		i++;
	}
	printf("Maior valor absoluto = %10.3f",maior);
	return 0;

}
