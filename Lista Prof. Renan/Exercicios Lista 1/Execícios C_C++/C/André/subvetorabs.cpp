#include <stdio.h>
#include <conio.h>
#include <math.h>
/*Este programa checa, em uma subrotina, o maior valor absoluto em um vetor de inteiros
e o retorna junto com sua posição no vetor*/

void valorabs(int vetor[20], int tamanho, int& maior, int& posicao){
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
	int n, i, vetor[20], max=0, pos=0;
	
	printf("Insira o tamanho de seu vetor de inteiros \n");
	scanf("%d", &n);
	printf("Insira os elementos de seu vetor de inteiros \n");
	for (i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	valorabs(vetor, n, max, pos);
	
	printf("O maior valor absoluto e %d \n Na posicao %d", max, pos);

	getch();
	return(0);
}

