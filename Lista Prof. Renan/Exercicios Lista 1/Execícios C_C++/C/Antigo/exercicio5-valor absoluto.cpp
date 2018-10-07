	#include <math.h> //abs
	#include <stdio.h> //printf scnf
	#include <locale.h> //setlocale
	//Faça um programa que leia 3 números e imprima o número de maior valor absoluto
	int main(){
		setlocale(LC_ALL,"Portuguese");
		float valor,mvalor;
		int i;
		mvalor=0;
		printf("Digite 3 valores para comparar seus módulos\n");
		for (i=0;i<3;i++){
			printf("Digite o %dº valor\n",(i+1));
			scanf("%f",&valor);
			if(abs(valor)>abs(mvalor)){		//abs só compara inteiros; fabs compara reais? nao sei?
			mvalor=fabs(valor);
			}
		}
		printf("O maior valor absoluto é %f",mvalor);
		return 0;
	}
