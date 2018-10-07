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
	CComplex operator-(float f1,CComplex C1){			//operador subtra��o real complexo  (messa o ordem)
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
		//	C�lculo do produto e soma de n n�meros complexos
		int i,n;
		float real,img;
		CComplex *complex,Prodtotal,Somatotal;
		setlocale(LC_ALL,"Portuguese");
		
		printf("Digite a quantidade de numeros complexos com que vai trabalhar:\n");
		scanf("%d",&n);
		complex = new CComplex[n];
		for (i=0;i<n;i++){
			printf("Digite o %d n�mero complexo:\nEscreva a parte REAL e a parte IMAGIN�RIA\nN�o escreva o j\n",i+1);
			scanf("%f%f",&real,&img);
			complex[i].set_ret(real,img);
		}
		
		printf ("Os n�meros complexo digitados s�o:\n");
		for (i=0;i<n;i++){
			printf("\nN�mero complexo %d:\n",i+1);
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
		printf("\nN�mero complexo Resultante:\n");
		printf("Forma retangular:\n");
		printf("%f %fj\n",Prodtotal.get_real(),Prodtotal.get_img());
		printf("Forma polar:\n");
		printf("%f /_%f\n\n",Prodtotal.get_modulo(),Prodtotal.get_ang());

		printf("Soma entre os numeros complexos");
		printf("\nN�mero complexo Resultante:\n");
		printf("Forma retangular:\n");
		printf("%f %fj\n",Somatotal.get_real(),Somatotal.get_img());
		printf("Forma polar:\n");
		printf("%f /_%f\n\n",Somatotal.get_modulo(),Somatotal.get_ang());
		return;
	}
	void opcao2(){
		//Opera��es entre dois n�meros complexos
		CComplex complex1,complex2,prod,soma,subt,div;
		float real,img;
		cout<<"Digite o 1 n�mero complexo:\nEscreva a parte REAL e a parte IMAGIN�RIA (N�o escreva o j)\n";
		cin>>real>>img;
		complex1.set_ret(real,img);
		cout<<"Digite o e n�mero complexo:\nEscreva a parte REAL e a parte IMAGIN�RIA (N�o escreva o j)\n";
		cin>>real>>img;
		complex2.set_ret(real,img);
		
		prod = complex1*complex2;
		soma = complex1+complex2;
		subt = complex1-complex2;
		div = complex1/complex2;
		
		cout<<"Soma entre os n�meros complexo\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<soma.get_real()<<" "<<soma.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<soma.get_modulo()<<" /_"<<soma.get_ang()<<"\n";

		cout<<"Subtra��o entre os n�meros complexo\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt.get_real()<<" "<<subt.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<subt.get_modulo()<<" /_"<<subt.get_ang()<<"\n";

		cout<<"Produto dos n�meros complexos\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<prod.get_real()<<" "<<prod.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<prod.get_modulo()<<" /_"<<prod.get_ang()<<"\n";
		
		cout<<"Divis�o entre os n�meros complexo\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<div.get_real()<<" "<<div.get_img()<<"j\n";
		cout<<"Forma polar:\n"<<div.get_modulo()<<" /_"<<div.get_ang()<<"\n";
		return;
	}
	void opcao3(){
		//Opera��es complexo e real
		CComplex complex1,prod,soma,subt1,subt2,div1,div2;
		float real,img,num_real;
		cout<<"Digite o n�mero complexo:\nEscreva a parte REAL e a parte IMAGIN�RIA (N�o escreva o j)\n";
		cin>>real>>img;
		complex1.set_ret(real,img);
		cout<<"Digite o n�mero real:\n";
		cin>>num_real;
		
		soma = complex1+num_real;
		prod = complex1*num_real;
		subt1 = complex1-num_real;
		div1 = complex1/num_real;
		subt2 = num_real-complex1;
		div2 = num_real/complex1;
		
		cout<<"Soma entre os numeros:\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<soma.get_real()<<" "<<soma.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<soma.get_modulo()<<" /_"<<soma.get_ang()<<"\n\n";

		cout<<"Subtra��o do n�mero complexo pelo n�mero real:\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt1.get_real()<<" "<<subt1.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<subt1.get_modulo()<<" /_"<<subt1.get_ang()<<"\n\n";

		cout<<"Subtra��o do n�mero real pelo n�mero complexo:\nN�mero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt2.get_real()<<" "<<subt2.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<subt2.get_modulo()<<" /_"<<subt2.get_ang()<<"\n\n";


		cout<<"Produto dos numeros:\nN�mero complexo resultante:\n";	
		cout<<"Forma retangular:\n"<<prod.get_real()<<" "<<prod.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<prod.get_modulo()<<" /_"<<prod.get_ang()<<"\n\n";
		
		cout<<"Divis�o do n�mero complexo pelo n�mero real:\nN�mero complexo rResultante:\n";
		cout<<"Forma retangular:\n"<<div1.get_real()<<" "<<div1.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<div1.get_modulo()<<" /_"<<div1.get_ang()<<"\n\n";
				
		cout<<"Divis�o do n�mero real pelo n�mero complexo:\nN�mero complexo Resultante:\n";
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
		setlocale(LC_ALL,"Portuguese"); // separador decimal ainda � o ponto, pois cin ignora setlocale
		cout<<"Programa Opera��es com n�meros complexos:\nOp��es de programa:\n";
		cout<<"(1) C�lculo do produto e soma de n n�meros complexos\n";
		cout<<"(2) C�lculo do produto, soma, subtra�ao e divis�o de dois numeros complexos\n";
		cout<<"(3) C�lculo do produto, soma, subtra��o e divis�o de um complexo por um real e vice versa\n";
		cout<<"Digite o �ndice da op��o escolhida:\n";
		cin>>opt;
		escolha(opt);
		return 0;	
	}
