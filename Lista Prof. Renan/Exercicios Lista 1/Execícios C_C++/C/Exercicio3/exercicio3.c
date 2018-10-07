#include <stdio.h>
//Faça um programa que leia n números reais e imprima a média aritmética entre eles.

int main(){
	FILE *arqin,*arqout;
	arqin=fopen("entrada.txt","r");
	arqout=fopen("saida.txt","w");
	
	float aux,total=0; // lembrar sempre de inicializar (atribuir valor inicial) a variavel a ser incrementada
	int i,n;
	//Quantidade de numeros que deseja inserir
	fscanf(arqin,"%d\n",&n);
	
	for (i=0;i<n;i++){			//nesse caso não há problema em fazer (i=1;i=n;i++)	// mas não é de costume
		fscanf(arqin,"%f ",&aux);		//entradas  //auxiliar recebe valor do loop
		total+=aux;				//total é incrementado com a variavel auxiliar
	}
	fprintf(arqout,"Media = %8.3f",total/n);
	fclose(arqin);
	fclose(arqout);
	return 0;
}


