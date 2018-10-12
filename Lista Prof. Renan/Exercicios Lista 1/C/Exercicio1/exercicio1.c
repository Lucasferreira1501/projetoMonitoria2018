//Faça um programa que leia 2 números reais e imprima a média aritmética entre eles.

#include <stdio.h>		//printf() scanf()
#include <stdlib.h>		//exit()

void controleLeitura (int var){
	fflush(stdin); //limpa buffer de entrada // impede que o enter passe para as demais leituras
	if (var==0||var==EOF){	//documentação de scanf
		printf("ERRO DE LEITURA");
		exit(1);
	}
	return;
}

int main(){
	float a,b,media;
	int var;
	//Leitura dos numeros
	var = scanf("%f",&a);
	controleLeitura(var);	//controle de entrada diferente de float
	var = scanf("%f",&b);
	controleLeitura(var);
	media=(a+b)/2;
	printf("%8.3f",media); // Saída
	return 0;
}

