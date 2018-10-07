#include <stdlib.h>
#include <stdio.h>
//Faça um programa que leia n números reais e imprima a média aritmética entre eles.
int main(){
	float* numeros;
	float total;
	int i,n;
	printf("Quantidade de numeros que deseja inserir:\n");
	scanf("%d",&n);
	numeros=(float*)malloc(n*sizeof(float));
	
	for (i=0;i<n;i++){
		printf("Digite outro numero real\n");
		scanf("%f",&numeros[i]);
		//scanf("%f",&aux);	//sem precisar usar ponteiros
		//total+=aux;
		total+=numeros[i];
	}
//	for (i=0;i<n;i++){								//sem precisar usar ponteiro
//		printf("Digite outro numero real\n");
//		scanf("%f",&aux);	s
//		total+=aux;
//	}

	printf("media = %f",total/n);
	return 0;
}
