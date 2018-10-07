	#include <iostream>
	#include <cstdlib>
	#include <math.h>
	#include<clocale>
	using namespace std;
	
	class vetor {
		private:
			float x,y,z,modulo;
		public:
			vetor();
			vetor(float,float);
			vetor(float,float,float);
			float get_x(){return x;};
			float get_y(){return y;};
			float get_z(){return z;};
			float get_modulo(){return modulo;};
			void set_coords(float,float,float);
			void set_coords(float,float);
			vetor operator+(vetor);
			void calc_modulo();
	};
	vetor::vetor(){
		x=0;
		y=0;
		z=0;
		modulo=0;
	}
	vetor::vetor(float a,float b){
		x=a;
		y=b;
		z=0;
		calc_modulo();
	}
	vetor::vetor(float a,float b,float c){
		x=a;
		y=b;
		z=c;
		calc_modulo();
	}
	vetor forcaresult(int n,vetor *forcas){
		int i;
		vetor res;
		for (i=0;i<n;i++){
			res = res + forcas[i];
		}
		return res;
	}
	
	void vetor::calc_modulo(){
		modulo = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
		return;
	}
	void vetor::set_coords(float a,float b,float c){
		x=a;
		y=b;
		z=c;
		calc_modulo();
		return;
	}
	void vetor::set_coords(float a,float b){
		x=a;
		y=b;
		z=0;
		calc_modulo();
		return;
	}
	
	vetor vetor::operator+(vetor v1){
		vetor soma;
		soma.x = x + v1.x;
		soma.y = y + v1.y;
		soma.z = z + v1.z;	
		return soma;
	}
	int main(){
		int i(0),n,coord;
		float a,b,c;
		vetor *forcas,result;
		setlocale(LC_ALL,"Portuguese");			
		cout<<"Digite o número de forças: ";
		cin>>n;
		cin.ignore(256,'\n');
		forcas = new vetor[n];
		cout<<endl<<"Dimensões válidas para os vetores força:"<<endl;
		cout<<"2 Dimensões .............. (x,y)"<<endl;
		cout<<"3 Dimensões ............. (x,y,z)"<<endl;
		while(i!=n){
			cout<<endl<<"Vetor força "<<i+1<<":"<<endl;
			cout<<"Digite a dimensão do vetor força "<<i+1<<": "<<endl;
			cin>>coord;
			cin.ignore(256,'\n');		//limpa buffer de entrada
			switch (coord){
				case 2:
					cout<<"Digite as coordenadas x e y do vetor força "<<i+1<<":"<<endl;
					cout<<"Coordenada x: ";
					cin>>a;
					cin.ignore(256,'\n');
					cout<<"Coordenada y: ";
					cin>>b;
					forcas[i].set_coords(a,b);
					i++;						
					break;
				case 3:
					cout<<"Digite as coordenadas x, y e z do vetor força "<<i+1<<":"<<endl;
					cout<<"Coordenada x: ";
					cin>>a;
					cin.ignore(256,'\n');
					cout<<"Coordenada y: ";
					cin>>b;						
					cout<<"Coordenada z: ";
					cin.ignore(256,'\n');
					cin>>c;
					forcas[i].set_coords(a,b,c);
					i++;
					break;
				default:
					cout<<"Dimensão não aceita"<<endl;
					cout<<"Digite uma dimensão válida"<<endl;
					break;
			}
		}
		result = forcaresult(n,forcas);
		result.calc_modulo();
		//print das forças
		for (i=0;i<n;i++){
			cout<<"Força "<<i+1<<": ( "<<forcas[i].get_x()<<" , "<<forcas[i].get_y()<<" , "<<forcas[i].get_z()<<" )"<<endl;
		}
		//print da força resultante
		cout<<"Força Resultante: ( "<<result.get_x()<<" , "<<result.get_y()<<" , "<<result.get_z()<<" )"<<endl;
		cout<<"Módulo Força Resultante: "<<result.get_modulo()<<endl;
		system("PAUSE");
		delete [] forcas;
		return 0;	
	}

