	#include<stdio.h> //fclose fopen printf scanf
	#include<locale.h>

	//Altere o programa anterior para que o usuário forneça os números de um arquivo de dados
	int main(){
		setlocale(LC_ALL,"Portuguese"); //use vigula como separador de decimais
		int n,i;
		float vet[50],s,media;
		FILE *entrada;
		FILE *saida;
		entrada=fopen("entradaex3.txt","r");
		saida=fopen("saidaex3.txt","w");
		printf("Programa cálculo da média aritmética\n");
		fscanf (entrada,"%d",&n);
		s=0;
		for(i=0;i<n;i++) {
			fscanf(entrada,"%f",&vet[i]);		//conferir
			s=s+vet[i];
		}
		media=s/n;
		fprintf(saida,"Média = %f",media);
		fclose(saida);
		fclose(entrada);
		return 0;
	}
