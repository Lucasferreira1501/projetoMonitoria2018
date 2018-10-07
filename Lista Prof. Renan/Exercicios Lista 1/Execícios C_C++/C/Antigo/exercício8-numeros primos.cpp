	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main(){
		int i,j,n,div(0),qprimo(0);
		setlocale(LC_ALL,"Portuguese");
		printf("Digite a quantdade de numeros primos:\n");
		scanf("%d",&n);
		printf("Os %d primeiros numeros primos sao:\n",n);
		for (j=1;qprimo!=n;j++){ 	//cada j é um número que será testado
			for (i=1;i<=j;i++){			// cada i é um possivel divisor de j (vai de 1 a j)
				if(j%i==0){					// div guarda número de divisores de cada j; se div ==2 2, é primo
					div++;
				}
			}
			if(div==2){
				printf(" %d",j);
				qprimo++;
			}
			div=0;
		}
		printf("\n");
		system("PAUSE");
		return (0);
	}
