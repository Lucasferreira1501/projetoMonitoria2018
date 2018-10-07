#include <math.h>
#include <stdio.h>
#include <conio.h>

int main(){
	float alfa, beta, gama, a, b, c, angulototal;
	printf("Insira o valor dos lados \n");
	scanf("%f %f %f", &a, &b, &c);
	
	float num = (pow(b, 2.0) + pow(c, 2.0) - pow(a, 2.0));
	float div = (2*b*c);
	
	alfa = acos(num/div); //ângulo oposto à 'a' em radianos
	beta = acos((pow(a, 2.0) + pow(c, 2.0) - pow(b, 2.0))/(2*a*c)); //ângulo oposto à 'b' em radianos
	gama = acos((pow(a, 2.0) + pow(b, 2.0) - pow(c, 2.0))/(2*a*b)); //ângulo oposto à 'c' em radianos
	angulototal = alfa + beta + gama;
	
	printf("%f \n %f \n %f",num, div, alfa);
	if (fabs(alfa) > 1 || fabs(beta) > 1 || fabs(gama) > 1){
		printf("Nao e triangulo \n");
	}
	else{
	if (fabs(angulototal - M_PI) > 0.0000002){
		printf ("Nao e triangulo \n");	
	}
	else{
		if (a==b && b==c){
			printf ("Triangulo equilatero");
		}
		else if (a==b || b==c || c==a){
			printf ("Triangulo isosceles");
		}
		else {
			printf ("Triangulo qualquer");
		}
	}
	}
	printf ("%20.10f %20.10f", alfa+beta+gama, M_PI);
	printf ("%20.10f", alfa+beta+gama-M_PI);
	getch ();
	return (0);
}
