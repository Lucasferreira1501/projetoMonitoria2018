#include <math.h>
#include <stdio.h>
#include <conio.h>

int main(){
	
	float lado[3], aux, alfa, beta, gama, numerador, divisor, razao, angulototal;
	int i;
	bool troca;
	
	printf("\nPrograma diz se um triangulo e isosceles, equilatero ou qualquer com precisao de 6 casas decimais.");
	printf("\nInsira os lados de seu triangulo\n");
	for (i=0; i<3; i++){
		scanf("%f", &lado[i]);
	}
	
	
	printf("Lados lidos: ");
	for (i=0; i<3; i++){
		printf("%f ", lado[i]);
	}
	
	//Ordenando os lados.
	while (troca == true){
		troca = false;
		for (i=0; i<2; i++){
			if (lado[i] > lado[i+1]){
				aux = lado[i];
				lado[i] = lado[i+1];
				lado[i+1] = aux;
				troca = true;
			}
		}
	}
	printf("\nLados em ordem crescente: ");
	for (i=0; i<3; i++){
		printf("%f ", lado[i]);
	}
	
	//Calculo dos angulos e impressao do passo-a-passo em caso de erro
	numerador = (pow(lado[0], 2.0) + pow(lado[1], 2.0) - pow(lado[2], 2.0));
	divisor = 2*lado[0]*lado[1];
	razao = numerador/divisor;
	alfa = acos(razao);
	
	printf("\nAngulo do lado a: \n  numerador: %f \n  divisor: %f \n  razao: %f \n  alfa: %f rad", numerador, divisor, razao, alfa);
	
	numerador = (pow(lado[0], 2.0) + pow(lado[2], 2.0) - pow(lado[1], 2.0));
	divisor = 2*lado[0]*lado[2];
	razao = numerador/divisor;
	beta = acos(razao);
	
	printf("\nAngulo do lado b:\n  numerador: %f \n  divisor: %f \n  razao: %f \n  beta: %f rad", numerador, divisor, razao, beta);
	
	numerador = (pow(lado[1], 2.0) + pow(lado[2], 2.0) - pow(lado[0], 2.0));
	divisor = 2*lado[1]*lado[2];
	razao = numerador/divisor;
	gama = acos(razao);
	
	printf("\nAngulo do lado c:\n  numerador: %f \n  divisor: %f \n  razao: %f \n  gama: %f rad", numerador, divisor, razao, gama);
	
	angulototal = alfa+beta+gama;
	printf("\nAngulo total = alfa + beta + gama = %f rad", angulototal);
	
	//Reconhecimento do triangulo
	if (fabs(angulototal - M_PI) < 0.0000005){
		if(lado[0] == lado[1] && fabs(lado[2]-(lado[0]*sqrt(2))) <= 0.0000005){
			printf("\nTriangulo isosceles");
		}
		else if(lado[0] == lado[1] && lado[0] == lado[2]){
			printf("\nTriangulo equilatero");
		}
		else{
			printf("\nTriangulo qualquer");
		}
	}
	else{
		printf("\nNao e triangulo");
	}
	getch();
	return(0);
}
