//Fa�a um programa que imprima os n�meros �mpares no intervalo fechado [a, b] (a e b escolhidos
//pelo usu�rio). Modifique o programa para que escreva os n�meros em um arquivo de sa�da.

#include<stdio.h>

int main(){
	int i,a,n,b,*nums;
	FILE *arqout;
	arqout=fopen("saida.txt","w");
	scanf("%d",&a);	
	scanf("%d",&b);

	fprintf(arqout,"Numeros Impares de %4d a %4d:\n",a,b);

	for (i=a;i<=b;i++){
	   	if ((i%2)!=0){
			fprintf(arqout,"%4d ",i);		//impares
		}
	}
	fclose(arqout);
	return 0;

}
