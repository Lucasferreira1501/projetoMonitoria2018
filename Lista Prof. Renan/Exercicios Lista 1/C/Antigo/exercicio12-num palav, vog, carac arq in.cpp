#include <stdlib.h> //system
#include <locale.h> //setlocale
#include <stdio.h> //printf scanf gets fgets
#include <string.h> //strlen
//número de palavras, vogais, caracteres
int main()
{		int vog(0),carac(0),nump(0),j,k,comeco(0),fim(0);
		char frase[700];
		setlocale(LC_ALL,"Portuguese");
		
		FILE *arqin;
		arqin = fopen("entradaex12.txt","r");
		printf("Descobrir o numero de vogais numa frase:\n");
        fgets(frase,699,arqin);
        k = strlen(frase); //dimensao da frase (conta espaços)
		for (j=0;j<k;j++){ 		// define inicio da frase
			if (frase[j] != ' '){
				comeco = j;
				nump=1;
				break;
			}
		}
		for (j=(k-1);j>=0;j--){ 	// define fim da frase / coloquei k-1, pois frase[k] ==\0 !=' '
			if (frase[j] != ' '){
				fim = j+1;			//usei j+1 para evitar erro ao digitar zero palavras
				break;
			}
		}
		for (j=comeco; j<fim; j++) {
			if (frase[j] != ' '){
				carac++;
			}
		}
		for (j=comeco;j<fim;j++){
			if (frase[j] == ' '){		// conta os espaços entre as palavras
				nump++;
			}
	 	}
		for (j=comeco;j<fim;j++){			// numero de vogais
			if (frase[j]== 'a' || 
				frase[j]== 'e' || 
				frase[j]== 'i' || 
				frase[j]== 'o' || 
				frase[j]== 'u' || 
				frase[j]== 'A' || 
				frase[j]== 'E' || 
				frase[j]== 'I' || 
				frase[j]== 'O' || 
				frase[j]== 'U') {
                vog = vog + 1;
            }
        }
		printf("A frase tem %d caracteres, %d palavras e %d vogais\n\n",carac,nump,vog);
		fclose(arqin);
		system("PAUSE"); // executa comando pause do windows (pres any key to continue)
	return 0;
}

