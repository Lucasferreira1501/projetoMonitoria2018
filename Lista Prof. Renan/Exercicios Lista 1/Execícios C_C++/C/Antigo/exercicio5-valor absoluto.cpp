	#include <math.h> //abs
	#include <stdio.h> //printf scnf
	#include <locale.h> //setlocale
	//Fa�a um programa que leia 3 n�meros e imprima o n�mero de maior valor absoluto
	int main(){
		setlocale(LC_ALL,"Portuguese");
		float valor,mvalor;
		int i;
		mvalor=0;
		printf("Digite 3 valores para comparar seus m�dulos\n");
		for (i=0;i<3;i++){
			printf("Digite o %d� valor\n",(i+1));
			scanf("%f",&valor);
			if(abs(valor)>abs(mvalor)){		//abs s� compara inteiros; fabs compara reais? nao sei?
			mvalor=fabs(valor);
			}
		}
		printf("O maior valor absoluto � %f",mvalor);
		return 0;
	}
