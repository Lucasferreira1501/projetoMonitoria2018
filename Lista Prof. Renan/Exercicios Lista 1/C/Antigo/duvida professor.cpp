	#include <stdio.h>
	#include<string.h>
	int main(){
		int k,i;
		char frase[100];
		char frase2[100];
		gets(frase);
		k= strlen(frase);
		printf("%s\n",frase);
		for(i=0;i<=k;i++){
			printf("%c\n",frase[i]);
		}
		printf("A");
		return 0;
	}
