//André Fernandes Gonçalves
//Matrícula 114038073

#include <stdio.h> //printf
#include <conio.h> //getch
#include <locale.h> //setlocale
#include <string.h> //fgets


int main(){
	setlocale(LC_ALL, "Portuguese");
	char frase[20];
	int numvog=0, i=0;
	
	printf("\n O programa conta o número de vogais em uma frase. \n");
	printf("\n Insira a frase: \n");
	fgets(frase,20,stdin);
	
	while (frase[i] != '\0'){
		if (frase[i] == 'a'|| frase[i] == 'e'|| frase[i] == 'i'|| frase[i] == 'o'|| frase[i] == 'u'){
			numvog++;
		}
		else if (frase[i] == 'A'|| frase[i] == 'E'|| frase[i] == 'I'|| frase[i] == 'O'|| frase[i] == 'U'){
			numvog++;
		}
		else if (frase[i] == 'Á'|| frase[i] == 'á'|| frase[i] == 'Â'|| frase[i] == 'â'|| frase[i] == 'Ã'|| frase[i] == 'ã'){
			numvog++;
		}
		else if (frase[i] == 'É'|| frase[i] == 'é'|| frase[i] == 'Ó'|| frase[i] == 'ó'|| frase[i] == 'Ô'|| frase[i] == 'ô'){
			numvog++;	
		}
		i++;
	}
	printf("\n O número de vogais é: %d \n", numvog);
	getch();
	return(0);
}
