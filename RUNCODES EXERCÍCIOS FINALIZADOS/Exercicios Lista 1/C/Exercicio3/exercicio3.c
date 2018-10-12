/*
	Faça um programa que leia n números reais e imprima a média aritmética entre eles.
	Altere o programa para que o usuário forneça os números de um arquivo de dados.
*/
#include <stdio.h>		//printf() scanf()
#include <stdlib.h>		//exit()
#include <string.h>		//strchr()

void controleScanf (int var){
	if (var==0||var==EOF)
	{	//documentação de scanf // retorno caso scanf falhe
		printf("ERRO DE LEITURA");
		exit(1); 		// termina programa
	}
	return;
}

void controlefgets (char *pntfgets){
	if (pntfgets==NULL)
	{	//documentação de scanf // retorno caso scanf falhe
		printf("ERRO DE ABERTURA DE ARQUIVO");
		exit(2); 		// termina programa
	}
	return;
}

void controlefopen(FILE *pArq){
  if (pArq==NULL)
  {
  	printf("ERRO DE ABERTURA DE ARQUIVO");
  	exit(3);
  }
}

void corrigeString(char *nome){
	char *pos;
	if ((pos=strchr(nome,'\n')) != NULL)
    	*pos = '\0';
}

int main(){
	
	int var,i,n;
	FILE *arqin;
	char nomeEntrada[30], *pntfgets;
	float media,aux,total=0; //var auxiliar // var acumuladora
	
	pntfgets = fgets(nomeEntrada,30,stdin);
	controlefgets(pntfgets);
	corrigeString(nomeEntrada);
	arqin = fopen(nomeEntrada,"r");
	controlefopen(arqin);
	
	
	//Quantidade de numeros que deseja inserir
	var = fscanf(arqin,"%d\n",&n);
	controleScanf(var); //controle caso diferente de número
	
	for (i=0;i<n;i++){
		var = fscanf(arqin,"%f ",&aux); 	//auxiliar //entrada de número real
		controleScanf(var);				//controle caso diferente de número
		total+=aux;							//total incrementado por var aux
	}
	media=total/n;
	printf("%8.3f",media);
	fclose(arqin);
	return 0;
}


