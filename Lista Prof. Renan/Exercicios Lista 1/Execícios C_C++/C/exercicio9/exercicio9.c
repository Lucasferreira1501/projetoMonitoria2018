#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//usando algoritmo de Eratosthenes
int main(){
	int i,j,n,*list_num;
	FILE *arqout;
	arqout=fopen("saida.txt","w");
	
	scanf("%d",&n);
	// vetor de inteiros indexados ´por 0 a n-1; inicialmente todos com zero
	list_num=(int*)calloc(n+1,sizeof(int));		//todos com 0 primeiramente//todos primos inicialmente	
 
	for (i=2;i<=sqrt(n);i++){
   		if (list_num[i]==0){		//se i é primo
    		for (j=i*i;j<=n;j+=i){
       			list_num[j] = 1;		//torna todos os multiplos de i não primos
			}
		}
	}
	fprintf(arqout,"Números Primos de %5d a %5d:\n",0,n);
	for (i=2;i<=n;i++){	// 0 e 1 não são primos
	   	if (list_num[i]==0){
			fprintf(arqout,"%4d\n",i);		//primos
		}
	}
	fclose(arqout);
	return 0;
}
