	#include<stdio.h>
	#include<locale.h>
	//Altere o programa anterior para que o usu�rio determine a quantidade de n�meros manipulados.

	int main(){
		setlocale(LC_ALL,"Portuguese"); //use vigula como separador de decimais
		int n,i;
		float vet[50];
		float media,s;
		printf("Programa c�lculo da m�dia aritm�tica\n");
		printf("Digite a quantidade de n�meros\n");
		scanf ("%d",&n);
		printf("Digite n�meros reais\n");
		printf("Use vigula como separador de decimais\n");
		s=0;
		for(i=0;i<n;i++) {
			scanf("%f",&vet[i]);		//conferir
			s=s+vet[i];
		}
		media=s/n;
		printf("M�dia aritm�tica = %f",media);
		return 0;
	}
