//André Fernandes Gonçalves
//Matrícula 114038073

#include <stdio.h>
#include <conio.h>

int main(){
	
	int n, i, troca = 1, vetor[20], aux;
	
	printf("\n Este programa organiza um conjunto de no maximo vinte inteiros em ordem crescente. \n");
	printf("\n Insira o numero de elementos. \n");
	scanf("%d", &n);
	printf("\n Insira os valores. \n");
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	while (troca > 0){
		troca = 0; //Significa que ainda não houve troca de posição no vetor
		for (i=0; i<n-1; i++){
			if (vetor[i] > vetor[i+1]){
				aux = vetor [i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				troca = 1; //Houve troca
			}
		}
	}
	printf("\n O conjunto de numeros organizado em ordem crescente: \n");
	for (i=0; i<n; i++){
		printf("%2d", vetor[i]);
	}
	getch();
	return(0);	
}
