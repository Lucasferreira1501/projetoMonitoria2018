	#include <stdio.h> //fopen fclose printf scanf
	#include <locale.h> //setlocale
	
	//Fa�a um programa que imprima os n�meros �mpares no intervalo fechado [a, b] (a e b escolhidos pelo usu�rio)
	//colocar tamb�m saida em arquivo
	int main(){
		int a,b,i;
		setlocale(LC_ALL,"Portuguese");
		FILE *saida;
		saida=fopen("saidaex10.txt","w");
		printf("Digite os dois n�meros limitantes do intervalo\n");
		scanf("%d%d",&a,&b);
		printf("Os n�meros de %d at� %d �mpares s�o:\n",a,b);
		fprintf(saida,"Os n�meros de %d at� %d �mpares s�o:\n",a,b);
		for (i=a;i<=b;i++){
			if(i%2!=0){
				printf("%d ",i);
				fprintf(saida,"%d ",i);
			}
		}
		return 0;
	}
