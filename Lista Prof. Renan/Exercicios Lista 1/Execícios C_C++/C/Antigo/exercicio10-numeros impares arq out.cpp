	#include <stdio.h> //fopen fclose printf scanf
	#include <locale.h> //setlocale
	
	//Faça um programa que imprima os números ímpares no intervalo fechado [a, b] (a e b escolhidos pelo usuário)
	//colocar também saida em arquivo
	int main(){
		int a,b,i;
		setlocale(LC_ALL,"Portuguese");
		FILE *saida;
		saida=fopen("saidaex10.txt","w");
		printf("Digite os dois números limitantes do intervalo\n");
		scanf("%d%d",&a,&b);
		printf("Os números de %d até %d ímpares são:\n",a,b);
		fprintf(saida,"Os números de %d até %d ímpares são:\n",a,b);
		for (i=a;i<=b;i++){
			if(i%2!=0){
				printf("%d ",i);
				fprintf(saida,"%d ",i);
			}
		}
		return 0;
	}
