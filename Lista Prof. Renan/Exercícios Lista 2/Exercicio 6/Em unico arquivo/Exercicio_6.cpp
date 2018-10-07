	#include <cstdio>
	#include <iostream>
	#include <cmath> 			// por padrao usa o radiano
	#include <clocale>
	#define pi 3.14159265359
	using namespace std;
	
	class CComplex {				//como colocar definições da classe em header .h		o que colocar???????
		private:
		float real,img,abs,ang;
		public:
		CComplex();
		CComplex(float,float);
		float get_real(){return real;};
		float get_img(){return img;};
		float get_abs(){return abs;};
		float get_ang(){return ang;};
		void set_ret(float,float);
		void calc_polar();
		void calc_ret();
		void operator=(CComplex);
		CComplex operator+(CComplex);
		CComplex operator-(CComplex);
		CComplex operator*(CComplex);
		CComplex operator/(CComplex);
		CComplex operator+(float);
		CComplex operator-(float);
		CComplex operator*(float);
		CComplex operator/(float);
	};

	CComplex::CComplex(){			//construtor
		real=0;
		img=0;
		abs=0;
		ang=0;
		ang_rad=0;
	}
	CComplex::CComplex(float a,float b){		//construtor entrada
		real=a;
		img=b;
		abs=0;
		calc_polar();
	}
	
	void CComplex::calc_ret(){				//Caso a entrada seja dada em coordenadas polares
		real = abs*cos(ang*pi/180);		//necessário angulo em radiano
		img = abs*sin(ang*pi/180);
		return;
	}
	void CComplex::calc_polar(){			// Cálculo das coordenadas polares
			ang = (atan2(img,real)*180)/pi;						
			abs = sqrt(pow(real,2)+pow(img,2));
			return;
	}
	void CComplex::set_ret(float a, float b){			// passagem de argumentos para os atributos do objeto
		real=a;
		img=b;
		calc_polar();									// posso fazer isso? é considerado fora do padrão?															
		return;
	}
	void CComplex::operator=(CComplex C1){			//operador atribuição complexos
		real= C1.real;
		img = C1.img;
		calc_polar();
		return;
	}
	CComplex CComplex::operator+(CComplex C1){		//operador soma complexos
		CComplex soma;
		soma.real = real + C1.real;
		soma.img = img + C1.img;
		return soma;
	}
	CComplex CComplex::operator-(CComplex C1){		//operador subtração complexos
		CComplex subt;
		subt.real = real - C1.real;
		subt.img = img - C1.img;
		return subt;
	}
	CComplex CComplex::operator*(CComplex C1){		//operador produto complexos
		CComplex prod;
		prod.real=(real*C1.real - img*C1.img);
		prod.img=(real*C1.img + img*C1.real);
		return prod;
	}
	CComplex CComplex::operator/(CComplex C1){		//	operador divião complexos
		CComplex div;																//cuidado: numero complexo divisor não pode ser nulo
		div.real = (real*C1.real + img*C1.img)/(pow(C1.real,2)+pow(C1.img,2));
		div.img =(img*C1.real - real*C1.img)/(pow(C1.real,2)+pow(C1.img,2)); 
		return div;
	}
	CComplex CComplex::operator+(float f1){			//operador soma complexo real (messao ordem)
		CComplex soma;
		soma.real = real + f1;
		soma.img = img;
		return soma;
	}
	CComplex CComplex::operator-(float f1){			//operador subtração complexo real (messao ordem)
		CComplex subt;
		subt.real = real - f1;
		subt.img = img;
		return subt;
	}
	CComplex CComplex::operator*(float f1){			//operador produto complexo real (messao ordem)
		CComplex prod;
		prod.real=real*f1;
		prod.img=img*f1;
		return prod;
	}
	CComplex CComplex::operator/(float f1){			//operador divisão complexo real (messao ordem)	
		CComplex div;								//cuidado: numero real divisor não pode ser nulo
		div.real = real/f1;
		div.img =img/f1; 
		return div;
	}
	CComplex operator+(float f1,CComplex C1){		// Teste operador soma real complexo  (messao ordem)
		float real,img;
		CComplex soma;
		real = f1 + C1.get_real();
		img = C1.get_img();
		soma.set_ret(real,img);
		return soma;
	}
	CComplex operator-(float f1,CComplex C1){			// Teste operador subtração real complexo  (messao ordem)
		float real,img;
		CComplex subt;
		real = f1 - C1.get_real();
		img = (-1)*C1.get_img();
		subt.set_ret(real,img);
		return subt;
	}
	CComplex operator*(float f1,CComplex C1){				// Teste operador produto real complexo  (messao ordem)
		float real,img;
		CComplex prod;
		real = f1 * C1.get_real();
		img = f1 * C1.get_img();
		prod.set_ret(real,img);
		return prod;
	}
	CComplex operator/(float f1,CComplex C1){				// errado, concertar!!!!!!!!!!
		float real,img;
		CComplex div;
		real = (f1*C1.get_real())/(pow(C1.get_real(),2)+pow(C1.get_img(),2));
		img =(-1)*(f1*C1.get_img())/(pow(C1.get_real(),2)+pow(C1.get_img(),2)); 
		div.set_ret(real,img);
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
			printf("%f /_%f\n\n",complex[i].get_abs(),complex[i].get_ang());
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
		printf("%f /_%f\n\n",Prodtotal.get_abs(),Prodtotal.get_ang());

		printf("Soma entre os numeros complexos");
		printf("\nNúmero complexo Resultante:\n");
		printf("Forma retangular:\n");
		printf("%f %fj\n",Somatotal.get_real(),Somatotal.get_img());
		printf("Forma polar:\n");
		printf("%f /_%f\n\n",Somatotal.get_abs(),Somatotal.get_ang());
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
		cout<<"Forma Polar:\n"<<soma.get_abs()<<" /_"<<soma.get_ang()<<"\n";

		cout<<"Subtração entre os números complexo\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt.get_real()<<" "<<subt.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<subt.get_abs()<<" /_"<<subt.get_ang()<<"\n";

		cout<<"Produto dos números complexos\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<prod.get_real()<<" "<<prod.get_img()<<"j\n";
		cout<<"Forma Polar:\n"<<prod.get_abs()<<" /_"<<prod.get_ang()<<"\n";
		
		cout<<"Divisão entre os números complexo\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<div.get_real()<<" "<<div.get_img()<<"j\n";
		cout<<"Forma polar:\n"<<div.get_abs()<<" /_"<<div.get_ang()<<"\n";
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
		cout<<"Forma polar:\n"<<soma.get_abs()<<" /_"<<soma.get_ang()<<"\n\n";

		cout<<"Subtração do número complexo pelo número real:\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt1.get_real()<<" "<<subt1.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<subt1.get_abs()<<" /_"<<subt1.get_ang()<<"\n\n";

		cout<<"Subtração do número real pelo número complexo:\nNúmero complexo resultante:\n";
		cout<<"Forma retangular:\n"<<subt2.get_real()<<" "<<subt2.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<subt2.get_abs()<<" /_"<<subt2.get_ang()<<"\n\n";


		cout<<"Produto dos numeros:\nNúmero complexo resultante:\n";	
		cout<<"Forma retangular:\n"<<prod.get_real()<<" "<<prod.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<prod.get_abs()<<" /_"<<prod.get_ang()<<"\n\n";
		
		cout<<"Divisão do número complexo pelo número real:\nNúmero complexo rResultante:\n";
		cout<<"Forma retangular:\n"<<div1.get_real()<<" "<<div1.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<div1.get_abs()<<" /_"<<div1.get_ang()<<"\n\n";
				
		cout<<"Divisão do número real pelo número complexo:\nNúmero complexo Resultante:\n";
		cout<<"Forma retangular:\n"<<div2.get_real()<<" "<<div2.get_img()<<"j"<<endl;
		cout<<"Forma polar:\n"<<div2.get_abs()<<" /_"<<div2.get_ang()<<"\n\n";
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
		setlocale(LC_ALL,"Portuguese"); // separador decimal é virgula
		cout<<"Programa Operações com números complexos:\nOpções de programa:\n";
		cout<<"(1) Cálculo do produto e soma de n números complexos\n";
		cout<<"(2) Cálculo do produto, soma, subtraçao e divisão de dois numeros complexos\n";
		cout<<"(3) Cálculo do produto, soma, subtração e divisão de um complexo por um real e vice versa\n";
		cout<<"Digite o índice da opção escolhida:\n";
		cin>>opt;
		escolha(opt);
		return 0;	
	}
