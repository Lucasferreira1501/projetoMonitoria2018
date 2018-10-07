#include <math.h>
#include <stdio.h>
#include <conio.h>
/* 
	Sejam 'j' e 'k' números primos e 'i' um número que não sabemos se é primo.
	Se 'i' não é primo, ele pode ser escrito como o produto entre 'j' e 'k'.
	i = j*k
	Sendo j <= k, temos que j*j <= j*k = i
	Isso significa que, para descobrir se 'i' é primo, o resto 'i%j' só precisa que 'j' varie até sqrt(i).
	Ou que 'j' varie até que j*j = i.
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
			checaprimo = true; //Começamos supondo que o número a ser testado é primo.
			j=2;  //Como 2 é o primeiro primo,'j' começa em 2 a cada incremento de 'i'.
			while (j <= (i/2)+1 && checaprimo == true){ //A primeira condição pode ser melhorada para 'j*j <= i'.
				if(i%j == 0){
					checaprimo = false; //Se o resto for zero 'i' não é primo e a condição do 'while' é desfeita.
				}
				j++; //'j' é incrementado até que a condição j*j <= i seja desfeita.
			}
			if (checaprimo == true){  //Se ao final do loop do 'while' 'checaprimo' continua verdade,
				printf("%d ", i);     //significa que 'i' é primo.
				cont++; //Como o número primo foi achado, o contador é incrementado até o valor de números primos pedido 'nprimo'.
			}								
			i++; //Após o loop do 'while' ser completo, 'i' é incrementado para um novo teste.				
		}
	}
	getch();
	return (0);	
}
