#include <stdio.h>
#include <conio.h>
#include <math.h>
//Este programa checa qual o maior valor absoluto em um vetor de inteiro e o imprime
int main(){
	int vetor[20], n, i, maior=0;
	printf("Insira o numero de elementos em seu vetor de inteiros \n");
	scanf("%d", &n);
	printf("Insira os elementos de seu vetor de inteiros \n");
	for (i=0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	for (i=0; i < n; i++){
		if ( maior < abs(vetor[i])){
			maior = abs(vetor[i]);
		}
	}
	printf("O maior valor absoluto e %d", maior);
	getch();
	return(0);
}
