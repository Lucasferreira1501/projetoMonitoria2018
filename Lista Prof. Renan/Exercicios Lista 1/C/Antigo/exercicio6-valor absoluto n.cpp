	#include <math.h> //abs
	#include <stdio.h> //printf scanf
	#include <stdlib.h> // system
	#include <locale.h> //setlocale
	//Faça um programa que leia 3 números e imprima o número de maior valor absoluto
	int main(){
		setlocale(LC_ALL,"Portuguese");
		float valor,mvalor;
		int i,n;
		mvalor=0;
		printf("Programa: Comparar módulos de números\n");
		printf("Digite a quantidades de números\n");
		scanf("%d",&n);
		for (i=0;i<n;i++){
			printf("Digite o %dº valor\n",(i+1));
			scanf("%f",&valor);
			if(abs(valor)>abs(mvalor)){		//abs só compara inteiros; fabs compara reais? nao sei?
			mvalor=valor;
			}
		}
		printf("O maior valor absoluto é %f\n",mvalor);
		system("PAUSE");
		return 0;
	}
