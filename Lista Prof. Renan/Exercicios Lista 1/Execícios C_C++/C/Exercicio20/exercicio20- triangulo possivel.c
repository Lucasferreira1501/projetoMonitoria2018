	#include <math.h>
	#include <stdio.h> // print scanf 
	
	int main(){
		float a,b,c,n;
		scanf("%f%f%f",&a,&b,&c);
		if(a<b+c&&a>abs(b-c)&&b<a+c&&b>abs(a-c)&&c<b+a&&c>abs(b-a)){
			printf("O triangulo %f, %f, %f e possivel",a,b,c);
		}
		else{
		printf("O triangulo %f, %f, %f nao e possivel",a,b,c);
		}
		return 0;
	}
			
