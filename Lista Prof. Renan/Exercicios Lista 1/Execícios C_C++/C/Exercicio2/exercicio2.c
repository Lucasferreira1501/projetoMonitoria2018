#include <stdio.h>

//Fa�a um programa que leia n n�meros reais e imprima a m�dia aritm�tica entre eles.

int main(){
	float aux,total=0; // lembrar sempre de inicializar (atribuir valor inicial) a variavel a ser incrementada
	int i,n;
	//printf("Quantidade de numeros que deseja inserir:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++){			//nesse caso n�o h� problema em fazer (i=1;i=n;i++)	// mas n�o � de costume
		//printf("Digite o %d numero real\n",i+1);
		scanf("%f",&aux);		//auxiliar recebe valor do loop
		total+=aux;				//total � incrementado com a variavel auxiliar
	}
	printf("Media = %8.3f",total/n);
	return 0;
}


