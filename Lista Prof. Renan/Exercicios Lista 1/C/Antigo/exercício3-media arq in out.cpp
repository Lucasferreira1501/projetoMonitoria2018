	#include<stdio.h> //fclose fopen printf scanf
	#include<locale.h>

	//Altere o programa anterior para que o usu�rio forne�a os n�meros de um arquivo de dados
	int main(){
		setlocale(LC_ALL,"Portuguese"); //use vigula como separador de decimais
		int n,i;
		float vet[50],s,media;
		FILE *entrada;
		FILE *saida;
		entrada=fopen("entradaex3.txt","r");
		saida=fopen("saidaex3.txt","w");
		printf("Programa c�lculo da m�dia aritm�tica\n");
		fscanf (entrada,"%d",&n);
		s=0;
		for(i=0;i<n;i++) {
			fscanf(entrada,"%f",&vet[i]);		//conferir
			s=s+vet[i];
		}
		media=s/n;
		fprintf(saida,"M�dia = %f",media);
		fclose(saida);
		fclose(entrada);
		return 0;
	}
