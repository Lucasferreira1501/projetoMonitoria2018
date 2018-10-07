#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//André Fernandes Gonçalves Matrícula 114.038.073
class vetor{
	private:
		int x = 0, y = 0;
		float norma;
	public:
		int getResultanteX(int);
		int getResultanteY(int);
		float getNorma(void);
};

int vetor::getResultanteX(int a){
	x = x + a;
	return(x);
}

int vetor::getResultanteY(int b){
	y = y + b;
	return(y);
}
float vetor::getNorma(void){
	norma = sqrt( pow(x,2) + pow(y,2) );
	return(norma);
}

int main() {
	int *X, *Y, x = 0, y = 0, n, i;
	vetor resultante;
	
	printf("\n Insira o número de vetores \n");
	scanf("%d", &n);
	X = (int*)malloc(n*sizeof(int));
	Y = (int*)malloc(n*sizeof(int));
	
	printf(" \n Insira as coordenadas X de seus vetores. \n");
	for (i = 0; i < n; i++){
		scanf("%d", X + i);
	}
	
	printf(" \n Insira as coordendas Y de seus vetores. \n");
	for (i = 0; i < n; i++){
		scanf("%d",Y + i);
	}
	
	for (i = 0; i < n; i++){
		x = x + resultante.getResultanteX( X[i]);
	}
	
	for (i = 0; i < n; i++){
		y = y + resultante.getResultanteY( Y[i]);
	}
	printf (" \n Vetor resultante : %2d%2d", x, y);
	printf ("\n de norma : %3f", resultante.getNorma());
	getch();
	return (0);
}
