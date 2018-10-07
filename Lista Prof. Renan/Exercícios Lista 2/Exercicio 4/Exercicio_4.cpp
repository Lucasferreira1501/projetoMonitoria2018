#include<cstdlib>
#include<iostream>
#include<cmath>

using namespace std;
/*
	Escreva um programa que leia um vetor de N n�meros inteiros,(N<=100), inverta a
	ordem dos elementos do vetor e imprima o vetor invertido. Por exemplo o vetor: {1, 3,
	5, 7} ter� seus elementos invertidos: {7, 5, 3, 1}. Observa��o: � necess�rio
	inverter os elementos do vetor. N�o basta imprimi-los em ordem inversa! Reescreva o
	programa para que, usando aloca��o din�mica de mem�ria, construa um vetor de N
	elementos, sendo N digitado pelo usu�rio
*/
void inverter(int*,int*,int);
void inverter(int*,int);
void print(int*,int);

int main(){
	int i,n,*vet,*vaux;
	cout<<"Digite o tamanho de seu vetor:\n";
	cin>>n;

	vet = new int[n];
	vaux = new int[n];
	
	cout<<"Digite os valores de seu vetor:\n";
	for (i=0;i<n;i++){
		cout<<"Valor "<<i+1<<":\n"<<endl;
		cin>>vet[i];
		vaux[i]=vet[i];		//copia para vaux
	}
	cout<<"Impressao de seu vetor:\n";
	(void)print(vet,n);
	(void)inverter(vet,vaux,n);	//usando dois vetores
	cout<<"Impressao de seu vetor invertido:\n";
	(void)print(vaux,n);
	
	(void)inverter(vet,n);	//usando var auxiliar
	cout<<"Impressao de seu vetor invertido:\n";
	(void)print(vet,n);
	
	delete(vet);
	delete(vaux);
	return 0;
}


void inverter(int *vet,int *vaux,int n){		//usando vetor aux
	int i;
	for (i=0;i<n;i++){
		vaux[i]=vet[n-i-1];
	}
	return;
}
void inverter(int *vet,int n){			//usando var aux
	int aux, i;
	for (i=0;i<floor(n/2);i++){
		aux=vet[i];
		vet[i]=vet[n-1-i];
		vet[n-1-i]=aux;
	}
	return;
}
void print(int *vet,int n){
	cout<<"[ ";
	for (int i=0;i<n-1;i++){
		cout<<vet[i];
		cout<<", ";
	}
	cout<<vet[n-1]<<" ";
	cout<<"]"<<endl;
}

