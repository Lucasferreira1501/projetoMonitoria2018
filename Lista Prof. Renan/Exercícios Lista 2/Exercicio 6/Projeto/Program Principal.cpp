	#include <cstdio>
	#include <iostream>
	using namespace std;
	#include <cmath> 			// por padrao usa o radiano
	#include <clocale>
	#include "CComplex.h"
	#define pi 3.14159265359 
	
	CComplex operator+(float f1,CComplex C1){			//operador soma real complexo  (messa o ordem)
		CComplex soma;
		soma.real = f1 + C1.real;
		soma.img = C1.img;
		return soma;
	}
	CComplex operator-(float f1,CComplex C1){			//operador subtração real complexo  (messa o ordem)
		CComplex subt;
		subt.real = f1 - C1.real;
		subt.img = (-1)*C1.img;
		return subt;
	}
	CComplex operator*(float f1,CComplex C1){				//operador produto real complexo  (messa o ordem)
		CComplex prod;
		prod.real = f1 * C1.real;
		prod.img = f1 * C1.img;
		return prod;
	}
	CComplex operator/(float f1,CComplex C1){				//operador divisao real complexo  (messa o ordem)
		CComplex div;
		div.real = (f1*C1.real/(pow(C1.real,2)+pow(C1.img,2)));
		div.img = (-1)*(f1*C1.img/(pow(C1.real,2)+pow(C1.img,2))); 
		return div;
	}
	void opcao1(){
		//	Cálculo do produto e soma de n números complexos
		int i,n;
		float real,img;
		CComplex *complex,Prodtotal,Somatotal;
		setlocale(LC_ALL,"Portuguese");
		
		printf("Digite a quantidade de numeros complexos com que vai trabalhar:\n");
		scanf("%d",&n);
		complex = new CComplex[n];
		for (i=0;i<n;i++){
			printf("Digite o %d número complexo:\nEscreva a parte REAL e a parte IMAGINÁRIA\nNão escreva o j\n",i+1);
			scanf("%f%f",&real,&img);
			complex[i].set_ret(real,img);
		}
		
		printf ("Os números complexo digitados são:\n");
		for (i=0;i<n;i++){
			printf("\nNúmero complexo %d:\n",i+1);
			printf("Forma retangular:\n");
			printf("%f %fj\n",complex[i].get_real(),complex[i].get_img());
			printf("Forma polar:\n");
			printf("%f /_%f\n\n",complex[i].get_modulo(),complex[i].get_ang());
		}
		Prodtotal=complex[0];
		for (i=1;i<n;i++){		//comeca em 1 para pular o primeiro objeto
			Prodtotal = Prodtotal*complex[i];
		}
		Somatotal=complex[0];	
		for (i=1;i<n;i++){
			Somatotal = Somatotal+complex[i];
		}
		
		printf("Produto entre os numeros complexos");
		printf("\nNúmero complexo Resultante:\n");
		printf("Forma retangular:\n");
		printf("%f %fj\n",Prodtotal.get_real(),Prodtotal.get_img());
		printf("Forma polar:\n");
		printf("%f /_%f\n\n",Prodtotal.get_modulo(),Prodtotal.get_ang());

		printf("Soma entre os numeros complexos");
		printf("\nNúmero complexo Resultante:\n");
		printf("Forma retangular:\n");
		printf("%f %fj\n",Somatotal.get_real(),Somatotal.get_img());
		printf("Forma polar:\n");
		printf("%f /_%f\n\n",Somatotal.get_modulo(),Somatotal.get_ang());
		return;
	}
	void opcao2(){
		//Operações entre dois números complexos
		CComplex complex1,complex2,prod,soma,subt,div;
		float real,img;
		cout<<"Digite o 1 número complexo:\nEscreva a parte REAL e a parte IMAGINÁRIA (Não escreva o j)\n";
		cin>>real>>img;
		complex1.set_ret(real,img);
		cout<<"Digite o e número complexo:\nEscreva a parte REAL e a parte IMAGINÁRIA (Não escreva o j)\n";
		cin>>real>>img;
		complex2.set_ret(real,img);
		
		prod = complex1*complex2;
		soma = complex1+complex2;
		subt = complex1-complex2;
		div = complex1/complex2;
		
		cout<<"Soma entre os números complexo\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<soma.get_real()<<" "<<soma.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<soma.get_modulo()<<" /_"<<soma.get_ang()<<"\n";

		cout<<"Subtração entre os números complexo\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt.get_real()<<" "<<subt.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<subt.get_modulo()<<" /_"<<subt.get_ang()<<"\n";

		cout<<"Produto dos números complexos\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<prod.get_real()<<" "<<prod.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<prod.get_modulo()<<" /_"<<prod.get_ang()<<"\n";
		
		cout<<"Divisão entre os números complexo\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<div.get_real()<<" "<<div.get_img()<<"j\n";
		cout<<"Forma polar:\n"<<div.get_modulo()<<" /_"<<div.get_ang()<<"\n";
		return;
	}
	void opcao3(){
		//Operações complexo e real
		CComplex complex1,prod,soma,subt1,subt2,div1,div2;
		float real,img,num_real;
		cout<<"Digite o número complexo:\nEscreva a parte REAL e a parte IMAGINÁRIA (Não escreva o j)\n";
		cin>>real>>img;
		complex1.set_ret(real,img);
		cout<<"Digite o número real:\n";
		cin>>num_real;
		
		soma = complex1+num_real;
		prod = complex1*num_real;
		subt1 = complex1-num_real;
		div1 = complex1/num_real;
		subt2 = num_real-complex1;
		div2 = num_real/complex1;
		
		cout<<"Soma entre os numeros:\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<soma.get_real()<<" "<<soma.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<soma.get_modulo()<<" /_"<<soma.get_ang()<<"\n\n";

		cout<<"Subtração do número complexo pelo número real:\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt1.get_real()<<" "<<subt1.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<subt1.get_modulo()<<" /_"<<subt1.get_ang()<<"\n\n";

		cout<<"Subtração do número real pelo número complexo:\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt2.get_real()<<" "<<subt2.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<subt2.get_modulo()<<" /_"<<subt2.get_ang()<<"\n\n";


		cout<<"Produto dos numeros:\nNúmero complexo resultante:\n";	
		cout<<"Forma retangular:\n"<<prod.get_real()<<" "<<prod.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<prod.get_modulo()<<" /_"<<prod.get_ang()<<"\n\n";
		
		cout<<"Divisão do número complexo pelo número real:\nNúmero complexo rResultante:\n";
		cout<<"Forma retangular:\n"<<div1.get_real()<<" "<<div1.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<div1.get_modulo()<<" /_"<<div1.get_ang()<<"\n\n";
				
		cout<<"Divisão do número real pelo número complexo:\nNúmero complexo Resultante:\n";
		cout<<"Forma retangular:\n"<<div2.get_real()<<" "<<div2.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<div2.get_modulo()<<" /_"<<div2.get_ang()<<"\n\n";
		return;
	}
	void escolha(int opt){
		switch (opt){
			case 1:
				opcao1();
				break;
			case 2:
				opcao2();
				break;
			case 3:
				opcao3();
			break;
		}
	}
	int main(){
		int opt;
		setlocale(LC_ALL,"Portuguese"); // separador decimal ainda é o ponto, pois cin ignora setlocale
		cout<<"Programa Operações com números complexos:\nOpções de programa:\n";
		cout<<"(1) Cálculo do produto e soma de n números complexos\n";
		cout<<"(2) Cálculo do produto, soma, subtraçao e divisão de dois numeros complexos\n";
		cout<<"(3) Cálculo do produto, soma, subtração e divisão de um complexo por um real e vice versa\n";
		cout<<"Digite o índice da opção escolhida:\n";
		cin>>opt;
		escolha(opt);
		return 0;	
	}
