#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void extremos(float[],int,float*,float*);


int main(){
	int i,n;
	float *vet,max,min;
	vet = (float*)calloc(n,sizeof(float));
	
	printf("Digite o tamanho de seu vetor\n");
	scanf("%d",&n);
	printf("Digite os valores de seu vetor\n");
	for(i=0;i<n;i++){
		printf("\nValor %d\n",i+1);
	//	scanf("%f",vet+i);
		scanf("%f",&(vet[i]));
	}
	max=vet[0];
	min=vet[0];
	extremos(vet,n,&max,&min);
	printf("\nMaior valor: %f\nO menor valor: %f\n",max,min);
	return 0;
}

void extremos(float vet[], int n, float *max, float *min){
	int i;
	*max=vet[0];
	*min=vet[0];
	for (i=0;i<n;i++){
		if (*max<vet[i]){
			*max=vet[i];
		}
		if (*min>vet[i]){
			*min=vet[i];

		}
	}
	return;
}
