//Faça um programa que leia n números reais e imprima a média aritmética entre eles.

#include <stdio.h>	//printf() scanf()
#include <stdlib.h>		//exit()

void controleLeitura (int var){
	fflush(stdin); 		//limpa buffer de entrada // impede que o enter passe para as demais leituras
	if (var==0||var==EOF){	//documentação de scanf // retorno caso scanf falhe
		printf("ERRO DE LEITURA");
		exit(1); 		// termina programa
	}
	return;
}

int main(){
	float aux,media,total=0;  //var auxiliar // var acumuladora
	int i,n,var;
	var = scanf("%d",&n); 	//Quantidade de numeros que deseja inserir
	controleLeitura(var);	//controle caso diferente de número
	
	for (i=0;i<n;i++){
		var = scanf("%f",&aux);		//auxiliar //entrada de número real
		controleLeitura(var);	//controle caso diferente de número
		total+=aux;				//total incrementado por var aux
	}
	media=total/n;
	printf("%8.3f",media);
	return 0;
}


