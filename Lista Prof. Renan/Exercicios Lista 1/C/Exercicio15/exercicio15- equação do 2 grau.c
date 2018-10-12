	#include <stdio.h> //printf scanf
	#include <locale.h> //setlocale
	#include <math.h> //sqrt pow
	
	int main(){
		setlocale(LC_ALL,"Portuguese");
		float a,b,c,r1,r2,rcpr,rcpi,delta;
		
		printf("Digite os coeficientes da equacao do 2 grau\n");
		scanf("%f%f%f",&a,&b,&c);
		delta=(b*b-4*a*c);
		if(delta>0){
			r1= ((-1)*b + sqrt(delta))/(2*a);
			r2= ((-1)*b - sqrt(delta))/(2*a);
			printf("\nAs raizes da equacao sao %f e %f\n",r1,r2);
		}
		else if(delta==0){
			r1= ((-1)*b)/(2*a);
			r2=r1;
			printf("\nAs raizes da equacao sao %f e %f\n",r1,r2);

		}
		else if(delta<0){
			delta=(-1)*delta;
			rcpr= ((-1)*b)/(2*a);
			rcpi= (sqrt(delta)/(2*a));
			printf("\nAs raizes da equacao sao %f + %fi e %f - %fi\n",rcpr,rcpi,rcpr,rcpi);

		}
		return 0;}
