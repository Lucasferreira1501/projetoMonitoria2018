	#include <stdio.h> //scanf printf 
	#include <locale.h> //setlocale
//Faça um programa que imprima os N primeiros números da série de Fibonacci:	
	int main(){
		int n,j,k,l,i;
		//j,k,l
		setlocale(LC_ALL,"Portuguese");
		printf("Digite a quantidade de termos da serie de Fibonacci\n");
		scanf("%d",&n);
		printf("Os %d termos da série de Fibonacci sao:\n",n);
		j=0;
		k=1;
		printf("%d ",k);
		for (i=2;i<=n;i++){
			l=k+j;
			printf("%d ",l);
			j=k;
			k=l;
		}
		return 0;}
		
