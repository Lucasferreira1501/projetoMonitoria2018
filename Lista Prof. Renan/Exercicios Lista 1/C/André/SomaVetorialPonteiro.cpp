#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//André Fernandes Gonçalves Matrícula 114.038.073
int main() {
	int n, *vetores, i, j, res[2];
	float norma;
//Leitura dos vetores força
	printf("\n Digite o numero de vetores : \n");
	scanf("%d",&n);
	vetores = (int*)malloc(n*2*sizeof(int));
	printf("\n Digite as coordenadas x e em seguida as coordenadas y de seus vetores \n");
	for (i = 0; i < 2*n; i++){
		scanf("%d", vetores + i);
	}

//Cálculo da Força Resultante	
	res[0] = 0;
	for (i = 0; i < n; i++){
		res[0] = res[0] + vetores[i];
	}
	res[1] = 0;
	for (i = n; i < 2*n; i++){
		res[1] = res[1] + vetores[i];
	}
	norma = sqrt( pow(res[0],2) + pow(res[1],2) );
//Impressão da Força Resultante
	printf("\n A forca resultante :");
	for (j = 0; j < 2; j++){
		printf("%4d", res[j]);
	}
	printf("\n de norma : %3f", norma);

	getch();
	return (0);
}
