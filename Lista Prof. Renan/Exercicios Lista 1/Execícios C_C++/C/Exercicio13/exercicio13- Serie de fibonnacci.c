	#include <stdio.h> //scanf printf 
//Faça um programa que imprima os N primeiros números da série de Fibonacci:	
	int main(){
		int n,j,k,l,i;
		//j,k,l
		//printf("Digite a quantidade de termos da serie de Fibonacci\n");
		scanf("%d",&n);
		printf("Os %4d termos da serie de Fibonacci sao:\n",n);
		j=0;
		k=1;
		printf("%4d ",k);
		for (i=2;i<=n;i++){
			l=k+j;
			printf("%4d ",l);
			j=k;
			k=l;
		}
		return 0;
	}
		
