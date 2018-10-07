#include <stdio.h>

//Faça um programa que leia n números reais e imprima a média aritmética entre eles.

int main(){
	float aux,total=0; // lembrar sempre de inicializar (atribuir valor inicial) a variavel a ser incrementada
	int i,n;
	//printf("Quantidade de numeros que deseja inserir:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++){			//nesse caso não há problema em fazer (i=1;i=n;i++)	// mas não é de costume
		//printf("Digite o %d numero real\n",i+1);
		scanf("%f",&aux);		//auxiliar recebe valor do loop
		total+=aux;				//total é incrementado com a variavel auxiliar
	}
	printf("Media = %8.3f",total/n);
	return 0;
}


