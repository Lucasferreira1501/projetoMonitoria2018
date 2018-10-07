#include <stdio.h>
#include <conio.h>

int main() {
   int i, j, n, CoordX[50], CoordY[50], res[2];

   printf("\n Insira o número de vetores :");
   scanf("%d", &n);
 
   //Leitura das coordenadas
   printf("\n Insira as coordenadas X de seus vetores :");
   for (i = 0; i < n; i++){
        scanf("%d", &CoordX[i]);
	}
  	printf("\n Insira as coordenadas Yde seus vetores :");
   for (i = 0; i < n; i++){
        scanf("%d", &CoordY[i]);
	}
   //Cálculo da Força Resultante
	res[0] = 0;
 	for (i = 0; i < n; i++ ){
 		res[0] = res[0] + CoordX[i];
	 }
	res[1] = 0;
 	for (i = 0; i < n; i++ ){
 		res[1] = res[1] + CoordY[i];
	}
   //Impressão da Força Resultante
   printf("\n Seu vetor resultante : ");
   for (j = 0; j < 2; j++){
   		printf("%3d", res[j]);
   }
	getch();
   return (0);
}
