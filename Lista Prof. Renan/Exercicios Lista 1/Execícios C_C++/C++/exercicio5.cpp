#include <stdio.h>
#include <math.h>

int main(){
	float num,aux;
	int i=0;
	printf("Digite o primeiro numero real:\n");
	scanf("%f",&num);
	aux=abs(num);
	while(i<2){
		printf("Digite o primeiro numero real:\n");
		scanf("%f",&num);
		if(aux<abs(num))
			aux=abs(num);
		i++;
	}
	printf("Maior valor absoluto = %f",aux);
	return 0;
}
