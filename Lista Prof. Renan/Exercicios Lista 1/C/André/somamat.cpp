#include <stdio.h>
#include <conio.h>

int main(){
	float A[20][20],B[20][20], C[20][20];
	int linhas, colunas, i, j;
	printf("Este programa realiza a soma matricial. \n");
	printf("Insira o numero de linhas e colunas da matrizes. \n");
	scanf("%d %d", &linhas, &colunas);
	printf("Insira os elementos de sua primeira matriz \n");
	for (i=0; i<linhas; i++){
		for (j=0; j<colunas; j++){
			scanf("%f", &A[i][j]);
		}
	}
	printf("Insira os elementos de sua segunda matriz \n");
	for (i=0; i<linhas; i++){
		for (j=0; j<colunas; j++){
			scanf("%f", &B[i][j]);
		}
	}
	
	//Cálculo da matriz resultante da soma
	for (i=0; i<linhas; i++){
		for (j=0; j<colunas; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	//Impressão da matriz resultante
	for (i=0; i<linhas; i++){
		for (j=0; j<colunas; j++){
			printf("%5.2f ", C[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return(0);
}
