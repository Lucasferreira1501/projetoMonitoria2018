	#include<stdio.h>
	#include<locale.h>
	//Altere o programa anterior para que o usuário determine a quantidade de números manipulados.

	int main(){
		setlocale(LC_ALL,"Portuguese"); //use vigula como separador de decimais
		int n,i;
		float vet[50];
		float media,s;
		printf("Programa cálculo da média aritmética\n");
		printf("Digite a quantidade de números\n");
		scanf ("%d",&n);
		printf("Digite números reais\n");
		printf("Use vigula como separador de decimais\n");
		s=0;
		for(i=0;i<n;i++) {
			scanf("%f",&vet[i]);		//conferir
			s=s+vet[i];
		}
		media=s/n;
		printf("Média aritmética = %f",media);
		return 0;
	}
