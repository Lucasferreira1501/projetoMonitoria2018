	#include <stdlib.h> //rand srand
	#include <stdio.h> //scanf printf
	#include <locale.h> //setlocale
//programa q peca para adivinhar número escolhido aleatoriamente entre 1 e 100
// eu padrao
	int main(){
		setlocale(LC_ALL,"Portuguese");
		int i,dez=0,unid=0;
		int num;
		char *dezenas[4],*unidades[9],*especiais[9];	//vinte trinta quarenta cinquenta
		dezenas[0]="Dez";
		dezenas[1]="Vinte";
		dezenas[2]="Trinta";
		dezenas[3]="Quarenta";
		dezenas[4]="Cinquenta";
		unidades[0]="um";
		unidades[1]="dois";
		unidades[2]="três";
		unidades[3]="quatro";
		unidades[4]="cinco";
		unidades[5]="seis";
		unidades[6]="sete";
		unidades[7]="oito";
		unidades[8]="nove";
		especiais[0]="onze";
		especiais[1]="doze";
		especiais[2]="treze";
		especiais[3]="quartorze";
		especiais[4]="quinze";
		especiais[5]="dezesseis";
		especiais[6]="dezesete";
		especiais[7]="dezoito";
		especiais[8]="dezenove";
		printf("Digite um número de 0 a 50:\n");
		scanf("%d",&num);
			if (num<10){
				printf("o número inserido é: %s",unidades[num-1]);
			}
			else if(num==10){
				dez=num/10;
				printf("o número inserido é: %s",dezenas[dez-1]);
			}
			else if(num<20){
				printf("o número inserido é: %s",especiais[num-11]);
			}
			else if(num<=50){
				dez=num/10;
				unid=num-dez*10;
				if(unid==0){
					printf("o número inserido é: %s",dezenas[dez-1]);
				}
				else{
					printf("o número inserido é: %s e %s",dezenas[dez-1],unidades[unid-1]);
				}
			}
		return 0;	}
