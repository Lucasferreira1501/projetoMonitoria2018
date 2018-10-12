#include <locale.h> //setlocale
#include <stdio.h> //printf scanf gets fgets
#include <string.h> //strlen
//número de palavras, vogais, caracteres

void defineInicioFim(char frase[], int k, int *comeco, int *fim){
	   	int j=0;
		while(frase[j]==' '){
			j++;
		}
		*comeco = j;	//defini inicio da frase
		
		j=k-1;
		while(frase[j]==' '){
			j--;
		}
		*fim = j+1;	//defini fim da frase
	return;
}

int main()
{		
	setlocale(LC_ALL,"Portuguese"); //permito que o ususário escreva sua frase em português com acentos
	int vog=0,carac=0,nump=0,j,i,k,comeco=0,fim=0;
	char frase[100],vogais[]={'a','á','à','â','ã','A','e','é','E','i','í','I','o','ó','ô','O','u','ú','U'};
	
	printf("Descobrir o número de vogais numa frase:\n");
    printf("Digite uma frase\n");
    gets(frase);
    
    k = strlen(frase); //dimensao da frase (conta espaços)	//nao inclui \0
    
	defineInicioFim(frase, k, &comeco, &fim);
	printf("%d %d",comeco,fim);

	for (j=comeco; j<fim; j++) {
		if (frase[j] != ' '){
			carac++;
		}
		else if (frase[j] == ' '){		// conta os espaços entre as palavras
			frase[j+1]==' '?:nump++;
		}
	}
	if (nump != 0){
		nump++;
	}
	for (j=comeco;j<fim;j++){			// numero de vogais
		for(i=0;i<19;i++){
			if (frase[j]==vogais[i]){
            	vog++;
        	}
		}
    }
	printf("A frase tem %d caracteres, %d palavras e %d vogais\n\n",carac,nump,vog);
	return 0;
}

