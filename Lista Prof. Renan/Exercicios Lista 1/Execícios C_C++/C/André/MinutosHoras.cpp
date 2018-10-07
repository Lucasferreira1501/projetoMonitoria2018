#include <stdio.h>

void ConvMnts (int minutos, int *resultado){
	resultado[0] = minutos/60;
	resultado [1] = (minutos%60)*60;
	return();
}

int main (){
	int minutos, *resultado[2];
	printf("Digite os minutos totais: \n");
	scanf("%d", &minutos);
	printf("\n ", resultado[0], resultado[1]);
	return(0);
}
