	#include <math.h> //abs
	#include <stdio.h> //printf scanf
	#include <stdlib.h> // system
	#include <locale.h> //setlocale
	//Fa�a um programa que leia 3 n�meros e imprima o n�mero de maior valor absoluto
	int main(){
		setlocale(LC_ALL,"Portuguese");
		float valor,mvalor;
		int i,n;
		mvalor=0;
		printf("Programa: Comparar m�dulos de n�meros\n");
		printf("Digite a quantidades de n�meros\n");
		scanf("%d",&n);
		for (i=0;i<n;i++){
			printf("Digite o %d� valor\n",(i+1));
			scanf("%f",&valor);
			if(abs(valor)>abs(mvalor)){		//abs s� compara inteiros; fabs compara reais? nao sei?
			mvalor=valor;
			}
		}
		printf("O maior valor absoluto � %f\n",mvalor);
		system("PAUSE");
		return 0;
	}
