#include <locale.h> // setlocale
#include <stdio.h> // printf scanf gets fgets
#include <stdlib.h> // exit
#include <string.h> // strlen

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

void controlefgets (char *pntfgets){
	if (pntfgets==NULL)
	{	//documentação de scanf // retorno caso scanf falhe
		printf("ERRO DE ABERTURA DE ARQUIVO");
		exit(2); 		// termina programa
	}
	return;
}

void controlefopen(FILE *pArq){
  if (pArq==NULL)
  {
  	printf("ERRO DE ABERTURA DE ARQUIVO");
  	exit(3);
  }
}

void corrigeString(char *nome){
	char *pos;
	if ((pos=strchr(nome,'\n')) != NULL)
    	*pos = '\0';
}


int main()
{		
	setlocale(LC_ALL," "); //permito que o ususário escreva sua frase em português com acentos
	int vog=0,carac=0,nump=0,j,i,k,comeco=0,fim=0;
	char *pntfgets, frase[100], vogais[]={'a','á','à','â','ã','A','e','é','E','i','í','I','o','ó','ô','O','u','ú','U'};
	
	printf("Descobrir o número de vogais numa frase:\n");
    printf("Digite uma frase\n");
    
	pntfgets = fgets(frase,100,stdin);
    controlefgets(pntfgets);
    corrigeString(frase);
    k = strlen(frase); //dimensao da frase (conta espaços)	//nao inclui \0
    
	defineInicioFim(frase, k, &comeco, &fim);

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
	printf("Numero de palavras: %d\nNumero de vogais: %d\nNumero de letras digitadas: %d",nump,vog,carac);
	return 0;
}

