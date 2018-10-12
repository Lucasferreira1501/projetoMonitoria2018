	#include <stdio.h> //printf scanf
	#include <locale.h> //setlocale
//Funcao que retorna n-esimo numero da serie de Fibonacci:
	int seriefibonacci(int n){
		//j,k,l
		int i,j,k,l;
		j=1;
		k=1;
		l=1; //caso o usuario peca o 1 termo ou 2 termo
		for (i=2;i<n;i++){
			l=k+j;
			j=k;
			k=l;
		}
		return (l);}
		
	int main(){
		int n;
		int resultado;
		setlocale(LC_ALL,"Portuguese");
		printf("Digite a posicao do termo da serie de fibbonnacci\n");
		scanf("%d",&n);
		resultado = seriefibonacci(n); 		// nao esquecer do argumento da funcao
		printf("O %d termo da serie de Fibonacci é %d:\n",n,resultado);
		return 0;
	}
		
