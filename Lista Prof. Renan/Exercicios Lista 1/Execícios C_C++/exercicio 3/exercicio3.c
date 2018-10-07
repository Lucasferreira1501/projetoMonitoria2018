#include <stdlib.h>
#include <stdio.h>
#include<stdlib.h>

int main(){
	float* numeros;
	FILE *entrada,*saida;
	float total;
	int i,n;
	
	entrada=fopen("entrada.txt","r");
	if (entrada == NULL) {
		printf("Arquivo nao pode ser aberto");
		exit(1);
	}
//ou	//serve para 1 comando somente
//	if (arquivo == NULL)
//		exit(1);
	saida=fopen("saida.txt","w");
	if (saida == NULL) {
		printf("Arquivo nao pode ser aberto");
		exit(1);
	}
	
	fscanf(entrada,"%d\n",&n);
	numeros=(float*)malloc(n*sizeof(float));
	
	for (i=0;i<n;i++){
		fscanf(entrada,"%f ",&numeros[i]);
		total+=numeros[i];
	}
	fclose(entrada);
//	for (i=0;i<n;i++){
//		fscanf(entrada,"%f",&aux);				//sem precisar usar ponteiros
//		total+=aux;
//	}
	fprintf(saida,"media = %f",total/n);

	fclose(saida);
	return 0;
}
