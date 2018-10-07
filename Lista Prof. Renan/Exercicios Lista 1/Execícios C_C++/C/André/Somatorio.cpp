#include <stdio.h> /* printf, scanf*/
#include <conio.h> /* getch */
int main() 
{
	int n, i, num(0), soma(0);
	printf(" Insira o número de termos \n");
	scanf("%d", &n);
	for (i=0; i<n; ++i)
	{
		printf("Insira o valor #%d \n",i+1);
		scanf("%d", &num);
		printf("num:%d \n i:%d \n", num, i );
		soma = soma + num;
	}
	printf("O somatorio e: %d O ultimo valor e: %d", soma, num);
	getch();
};
