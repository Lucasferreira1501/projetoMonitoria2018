//Fa�a um programa que imprima os n�meros �mpares no intervalo fechado [a, b] (a e b escolhidos
//pelo usu�rio). Modifique o programa para que escreva os n�meros em um arquivo de sa�da.
#include<stdio.h>

int main(){
	int i,a,n,b,*nums;
	//printf("Insira o intervalo [a,b]:\n\n");
	//printf("a: ");
	scanf("%d",&a);	
	//printf("b: ");
	scanf("%d",&b);
	
	printf("Numeros Impares de %4d a %4d:\n",a,b);
	for (i=a;i<=b;i++){
	   	if ((i%2)!=0){
			printf("%4d ",i);		// Impares
		}
	}
	return 0;

}
