	#include <stdlib.h> //rand srand
	#include <stdio.h> //scanf printf
	#include <time.h> //time
	#include <locale.h> //setlocale
//programa q peca para adivinhar número escolhido aleatoriamente entre 1 e 100
// eu padrao
	int main(){
		setlocale(LC_ALL,"Portuguese");
		int a(1),b(100),n,m,t;
		srand(time(NULL));
		n=rand()%101;
		printf("%d",n);
		t=0;
		m=-1;
		do{	printf("O número procurado está entre %d e %d\n",a,b);
			printf("Digite um palpite\n");
			t++;
			scanf("%d",&m);
			if (m==n){
				printf("Parabéns! Você acertou o número em %d tentativas\n",t);
			}
			else if(m>a&&m<n){
				a=m;
			}
			else if(m<b&&m>n){
				b=m;
			}
		}while(m!=n);
		return 0;	}
