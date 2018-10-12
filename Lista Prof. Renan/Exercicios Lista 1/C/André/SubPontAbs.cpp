#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
/*Este programa checa, em uma subrotina, o maior valor absoluto em um ponteiro de inteiros
e o retorna junto com sua posição no vetor*/

void valorabs(int *vetor, int tamanho, int& maior, int& posicao){
	int i;
	for (i=0; i < tamanho; i++){
		if (abs(vetor[i]) > maior){
			maior = abs(vetor[i]);
			posicao = i+1;
		}
	}	
	return;
}

int main(){
	int n, i, *vetor, max=0, pos=0;
	
	printf("Insira o tamanho de seu vetor de inteiros \n");
	scanf("%d", &n);
	vetor = (int*)malloc(n*sizeof(int));
	printf("Insira os elementos de seu vetor de inteiros \n");
	for (i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	valorabs(vetor, n, max, pos);
	
	printf("O maior valor absoluto e %d na posicao %d", max, pos);

	getch();
	return(0);
}

