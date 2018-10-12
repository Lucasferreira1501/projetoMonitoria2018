#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//André Fernandes Gonçalves Matrícula 114.038.073
struct vetor{
	int CoordX, CoordY;
};

int main() {
	
	vetor *Vetores;
	Vetores = new vetor;
	int n, i, res[2]={0,0};
	float norma;

//Leitura dos vetores
	printf("\n Digite o numero de vetores.\n");
	scanf("%d", &n);
	
	Vetores = (vetor*)malloc(n*sizeof(int));
	
	printf("\n Insira as coordenadas x de seus vetores.\n");
	for (i = 0; i < n; i++){
		scanf("%d", &Vetores[i].CoordX);
	}
	
	printf("\n Insira as coordenadas y de seus vetores.\n");
	for (i = 0; i < n; i++){
		scanf("%d", &Vetores[i].CoordY);
	}

//Cálculo da Força Resultante
	for (i = 0; i < n; i++){
		res[0] = res[0] + Vetores[i].CoordX;
		res[1] = res[1] + Vetores[i].CoordY;
	}
	norma = pow( ( pow(res[0],2) + pow(res[1],2) ) , 0.5 );
	
//Impressão da Força Resultante
	printf("\n Seu vetor resultante :");
	for (i = 0; i < 2; i++){
		printf("%3d", res[i]);
	}
	printf("\n de norma : %3f", norma);
	
	getch();
	return (0);
}
