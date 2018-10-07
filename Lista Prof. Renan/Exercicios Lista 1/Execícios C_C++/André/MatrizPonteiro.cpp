#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	int **matriz, i, j, linha, coluna;
	//Leitura da matriz
	printf("\n Insira o numero de linhas e colunas de sua matriz \n");
	scanf("%d %d", &linha, &coluna);
	//Alocacao das linhas da matriz
	matriz = (int**)malloc(linha*sizeof(int*));
	//Alocacao das colunas da matriz
	for (i=0; i<linha; i++){
		matriz[i] = (int*)malloc(coluna*sizeof(int));
	}
	printf("\n Insira o elementos de sua matriz %d por %d \n", linha, coluna);
	for (i=0; i<linha; i++){
		for (j=0; j<coluna; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	//Impressao da matriz
	printf("\n Matriz lida: \n");
	for (i=0; i<linha; i++){
		for (j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	//Liberamento da memria alocada
	for (i=0; i<linha; i++){
		free(matriz[i]);
	}
	getch();
	return(0);
}
