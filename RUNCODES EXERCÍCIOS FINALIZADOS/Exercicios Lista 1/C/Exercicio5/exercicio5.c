//Fa�a um programa que leia 3 n�meros e imprima o n�mero de maior valor absoluto

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void controleScanf (int var){
	if (var==0||var==EOF) //documenta��o de scanf // retorno caso scanf falhe
	{	
		printf("ERRO DE LEITURA");
		exit(1); 		// termina programa
	}
	return;
}

int main(){
	int i=0, var;
	float num,maior;
	
	var = scanf("%f",&num);	// leitura do primeiro n�mero
	controleScanf (var);
	
	maior = fabs(num);
	while(i<2){
		var = scanf("%f",&num);
		controleScanf (var);
		if(maior<abs(num))
			maior=fabs(num);
		i++;
	}
	printf("%10.3f",maior);
	return 0;
}
