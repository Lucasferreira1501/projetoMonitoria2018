	#include <cstdlib>
	#include <iostream>
	using namespace std;
	//polinomio:
	// Ao + A1X1 + A2X2 + ....
	
	
	class polinomio{
		protected:
			int* coef;					//coef de cada termo
			int n;						// grau do polinomio
			float raiz;					// raiz do polinomio
		public:
			virtual ~polinomio();	//destrutor classe mae
			void criaPol(int,int*);		//cria o polinomio			//aloc o numero de coef correspondente ao grau do polinomio coef = grau + 1
			float calcPx(float); 		//calcula P(x)
			int* get_PntCoef(){return coef;};
			int get_coef(int i){return coef[i];};
			float get_raiz(){return raiz;};
			virtual void metodo() = 0;
	};
	polinomio::~polinomio(){
		cout<<"Destrutor polinomio executado"<<endl;
		delete [] coef;
	}
	void polinomio::criaPol(int a,int *coef1){
		this->n = a;
		this->coef = &coef1;
		int i;
		cout<<"Digite os coeficientes do polin�mio: "<<endl;
		for (i=0;i<(n+1);i++){
			cin>>coef[i];
			cin.ignore(10,'\n');
		}	
	}
	class  pol_newton:public polinomio{
		public:
			~pol_newton();
			void metodo();
	};
	pol_newton::~pol_newton(){
		cout<<"Destrutor pol_newton executado"<<endl;
	}
	class pol_bis:public polinomio{
		public:
			~pol_bis();
			void metodo();
	};
	pol_bis::~pol_bis(){
		cout<<"Destrutor pol_bis executado"<<endl;
	}
	polinomio* option(){
		int opt;
		polinomio *pnt;
		cout<<"M�todos de encontrar ra�zes do polin�mio: "<<endl;
		cout<<"   M�todo............................�ndice"<<endl;
		cout<<"  Bissec��o............................(1)"<<endl;
		cout<<"Newton-Rapson..........................(2)"<<endl;
		cout<<"Digite o �ndice do m�todo:"<<endl;
		cin>>opt;
		cin.ignore(10,'\n');
		if(opt==1){
			pnt = new pol_bis; 		
		}else if(opt==2){
			pnt = new pol_newton;
		}
		else {
			return NULL;
		}
		return pnt;
	}
	int main(){
		polinomio *pnt;
		int n, *coef;
		cout<<"Programa Polin�mio"<<endl;
		cout<<"Digite o grau de seu polinomio:"<<endl;
		cin>>n;
		cin.ignore(10,'\n');
		coef = new int [n+1];
		pnt = option();
		if(pnt!=NULL){
			pnt->criaPol(n,coef);
			pnt->metodo();
			cout<<pnt->
		}
	}
