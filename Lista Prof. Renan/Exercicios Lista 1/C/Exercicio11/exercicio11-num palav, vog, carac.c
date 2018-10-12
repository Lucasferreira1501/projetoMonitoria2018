#include <locale.h> //setlocale
#include <stdio.h> //printf scanf gets fgets
#include <string.h> //strlen
//n�mero de palavras, vogais, caracteres

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
	setlocale(LC_ALL,"Portuguese"); //permito que o usus�rio escreva sua frase em portugu�s com acentos
	int vog=0,carac=0,nump=0,j,i,k,comeco=0,fim=0;
	char frase[100],vogais[]={'a','�','�','�','�','A','e','�','E','i','�','I','o','�','�','O','u','�','U'};
	
	printf("Descobrir o n�mero de vogais numa frase:\n");
    printf("Digite uma frase\n");
    gets(frase);
    
    k = strlen(frase); //dimensao da frase (conta espa�os)	//nao inclui \0
    
	defineInicioFim(frase, k, &comeco, &fim);
	printf("%d %d",comeco,fim);

	for (j=comeco; j<fim; j++) {
		if (frase[j] != ' '){
			carac++;
		}
		else if (frase[j] == ' '){		// conta os espa�os entre as palavras
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

