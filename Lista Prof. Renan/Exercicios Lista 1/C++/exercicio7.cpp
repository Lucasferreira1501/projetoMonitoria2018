// Faça um programa escreva na tela todos os caracteres ASCII, os respectivos códigos decimais e
//hexadecimais.
#include <stdio.h>
#include <math.h>

int main(){
	int i=0,total_ascii=256;		//ascii dec vai de 0 a 255
	printf("Codigo ASCII:\n Em decimal, hexadecimal e caractere respectivamente:\n\n");
	while(i<total_ascii){
		printf("%d           %X           %c\n",i,i,i);
		i++;
	}
	return 0;
}



