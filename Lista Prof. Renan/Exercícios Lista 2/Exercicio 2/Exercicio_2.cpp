#include<stdio.h>
#include <math.h>

//Crie um fun��o float potencia(float r, int n) que eleve o valor de r � n-
//�sima pot�ncia. Por exemplo, 166.375 = potencia(5.5, 3), 4.84 =
//potencia(2.2, 2).Rescreva esta fun��o potencia()para que receba o endere�o da
//vari�vel da base. A nova fun��o deve ter a seguinte declara��o void potencia(float
//*r, int n) e deve retornar a solu��o na pr�pria vari�vel apontada por r. Reescreva a
//fun��o passando o valor por refer�ncia void potencia(float &r, int n)

//r � base / n � potencia

//ex 2
float potencia(float,int);
void potencia(float*,int);

int main(){
	int n;
	float r,k,pot;						// r_backup � para o print da passagem por referencia 
	printf("Digite a potencia:\n");
	scanf("%d",&n);
	printf("Digite a base:\n");
	scanf("%f",&r);
	k=r;
	pot = (float) potencia(r,n);
	printf("%f elevado a %d potencia e igual a:  %f\n\n",r,n,pot);
	(void) potencia(&r,n);
	printf("%f elevado a %d potencia e igual a:  %f",k,n,r);
	return 0;
}

float potencia(float r, int n){
	/*
		float pot=r;
		if (n>0)
		{
			for (int i=0;i<n-1;i++){
				r *= pot;
			}
		}
		else if(n<0)
		{	
			for (int i=0;i<(-1)*(n-1);i++){
				r *= pot;
			}
			r=1/r;
		}
		else if(n==0)
		{
			r=1;
		}
	*/
	r = pow(r,n);
	return r;
}

//ex 2.1

void potencia(float *r, int n){
	/*
		float pot=*r;
		if (n>0)
		{
			for (int i=0;i<n-1;i++){
				*r *= pot;
			}
		}
		else if(n<0)
		{	
			for (int i=0;i<(-1)*(n-1);i++){
				*r *= pot;
			}
			*r =1/(*r);
		}
		else if(n==0)
		{
			(*r)=1;
		}
	*/
	*r = pow(*r,n);
	return;
}




