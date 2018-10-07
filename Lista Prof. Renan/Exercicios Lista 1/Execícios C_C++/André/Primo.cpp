#include <math.h>
#include <stdio.h>
#include <conio.h>
/* 
	Sejam 'j' e 'k' n�meros primos e 'i' um n�mero que n�o sabemos se � primo.
	Se 'i' n�o � primo, ele pode ser escrito como o produto entre 'j' e 'k'.
	i = j*k
	Sendo j <= k, temos que j*j <= j*k = i
	Isso significa que, para descobrir se 'i' � primo, o resto 'i%j' s� precisa que 'j' varie at� sqrt(i).
	Ou que 'j' varie at� que j*j = i.
*/
int main (){
	
	int i(2), j, cont(0), nprimo;
	bool checaprimo = true;
	
	printf ("Insira a quantidade de numeros primos que voce quer \n");
	scanf ("%d",&nprimo);
	
	if(nprimo == 0){
		printf("Nao ha primos");
	}
	else{
		printf("Os %d primeiros numeros primos sao:\n", nprimo);
		while (cont < nprimo){
			checaprimo = true; //Come�amos supondo que o n�mero a ser testado � primo.
			j=2;  //Como 2 � o primeiro primo,'j' come�a em 2 a cada incremento de 'i'.
			while (j <= (i/2)+1 && checaprimo == true){ //A primeira condi��o pode ser melhorada para 'j*j <= i'.
				if(i%j == 0){
					checaprimo = false; //Se o resto for zero 'i' n�o � primo e a condi��o do 'while' � desfeita.
				}
				j++; //'j' � incrementado at� que a condi��o j*j <= i seja desfeita.
			}
			if (checaprimo == true){  //Se ao final do loop do 'while' 'checaprimo' continua verdade,
				printf("%d ", i);     //significa que 'i' � primo.
				cont++; //Como o n�mero primo foi achado, o contador � incrementado at� o valor de n�meros primos pedido 'nprimo'.
			}								
			i++; //Ap�s o loop do 'while' ser completo, 'i' � incrementado para um novo teste.				
		}
	}
	getch();
	return (0);	
}
