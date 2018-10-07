#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//usando algoritmo de Eratosthenes
int main(){
	int i,j,n,*list_num,cont=0;
	n=100;
	// vetor de inteiros indexados ´por 0 a n-1; inicialmente todos com zero
	list_num=(int*)calloc(n,sizeof(int));		//todos com 0 primeiramente //todos primos inicialmente	
 
 	//modifica vetor; preenche vetor com 1 quando numero é não primo
	for (i=2;i<=sqrt(n);i++){
   		if (list_num[i]==0){		//se i é primo
    		for (j=i*i;j<=n;j+=i){
       			list_num[j] = 1;		//torna todos os multiplos de i não primos
			}
		}
	}
	//imprime lista de numeros primos de 2 a n
	i=2;
	while(cont<10){
   		if (list_num[i]==0){
			printf("%d ",i);		//primos
			cont++;
		}
		i++;
	}
	return 0;
}


