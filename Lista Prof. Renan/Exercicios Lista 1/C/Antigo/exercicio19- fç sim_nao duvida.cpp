	#include <stdio.h>
// Crie uma função inteira sim_nao que espera o usuário pressionar as teclas [s] ou [n] retornando
//1 ou 0 respectivamente. Se o usuário pressionar qualquer outra tecla pergunte novamente.
	int sim_nao(char n){
		if (n =='s'){
			return 1;
		}
		else if (n =='n'){
			return 0;
		}
		else{
			return 2;
		}
	}
	int main(){
		char n;
		int resultado(2);
		while(resultado==2){
		printf("[s/n]\n");
		scanf("%c",&n);
		resultado = sim_nao(n);
		}
		printf("\n%d",resultado);
		return 0;
	}
