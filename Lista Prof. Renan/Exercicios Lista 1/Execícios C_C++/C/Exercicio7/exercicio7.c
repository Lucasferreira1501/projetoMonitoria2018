// Fa�a um programa escreva na tela todos os caracteres ASCII, os respectivos c�digos decimais e hexadecimais.
//duvida sobre ascii
#include <stdio.h>
#include <locale.h> 	//setlocale

int main(){
	setlocale(LC_CTYPE,"Portuguese"); //necess�rio ao print de � (linha 15)
	int i=0;
	printf("Codigo ASCII:\n\r  DEC  HEX  OCT  CHAR\n\n");
	for(i=0;i<256;i++){			//ascii dec vai de 0 a 255
		printf("  %3d  %3X  %3o  %4c\n",i,i,i,i);
	}
	return 0;
}



