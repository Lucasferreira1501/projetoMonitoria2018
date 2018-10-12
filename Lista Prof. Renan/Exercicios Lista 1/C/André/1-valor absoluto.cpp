#include <stdio.h>
#include <math.h>
#include <conio.h>
/*Elabore um programa que leia n números reais e imprima o número de maior valor absoluto*/
int main()
{
	float valor, teste(0);
	int n, i;
	printf("Quantos valores serao inseridos \n");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf("Escreva o valor #%d \n",(i+1));
		scanf("%f",&valor);
		if (fabs(teste) < fabs(valor))
		{
			teste = valor;
		}
         
	}
	printf(" \n Numero de maior valor absoluto: %f", teste);
	getch();
}
