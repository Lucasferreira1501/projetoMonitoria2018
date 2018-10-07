#include<stdlib.h>
#include<math.h>
#include<stdio.h>
///Escreva um programa que leia um vetor de N números inteiros,(N<=100), inverta a
//ordem dos elementos do vetor e imprima o vetor invertido. Por exemplo o vetor: {1, 3,
//5, 7} terá seus elementos invertidos: {7, 5, 3, 1}. Observação: É necessário
//inverter os elementos do vetor. Não basta imprimi-los em ordem inversa! Reescreva o
//programa para que, usando alocação dinâmica de memória, construa um vetor de N
//elementos, sendo N digitado pelo usuário

void inverter_2_vet(int*,int*,int);
void inverter(int*,int);
void print(int*,int);

int main(){
	int i,n=101,*vet,*vaux;
	while(n>100){
		printf("Digite o tamanho de seu vetor:\n");
		scanf("%d",&n);
	}
	vet = (int*)calloc(n,sizeof(int));
	vaux = (int*)calloc(n,sizeof(int));
	
	printf("Digite os valores de seu vetor:\n");
	for (i=0;i<n;i++){
		printf("Valor %d\n",i+1);
		scanf("%d",&vet[i]);
		vaux[i]=vet[i];		//copia para vaux
	}
	
	printf("Impressao de seu vetor:\n");
	(void)print(vet,n);
	(void)inverter_2_vet(vet,vaux,n);	//usando dois vetores
	printf("Impressao de seu vetor invertido:\n");
	(void)print(vaux,n);
	
	(void)inverter(vet,n);	//usando var auxiliar
	printf("Impressao de seu vetor invertido:\n");
	(void)print(vet,n);
	
	free(vet);
	free(vaux);
	return 0;
}


void inverter_2_vet(int *vet,int *vaux,int n){
	int i;
	for (i=0;i<n;i++){
		vaux[i]=vet[n-i-1];
	}
	return;
}
void inverter(int *vet,int n){
	int aux, i;
	for (i=0;i<floor(n/2);i++){
		aux=vet[i];
		vet[i]=vet[n-1-i];
		vet[n-1-i]=aux;
	}
	return;
}
void print(int *vet,int n){
	int i;
	printf("[ ");
	for (i=0;i<n-1;i++){
		printf("%d, ",vet[i]);
	}
	printf("%d ",vet[n-1]);
	printf("]\n");
}

