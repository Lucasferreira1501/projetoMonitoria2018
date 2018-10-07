	#include<cstdlib>
	#include <cmath>
	#include <iostream>
	
	using namespace std;
	class vetor{
		private:
			int dim;
			float *vet,max,min;
		public:
			vetor();
			vetor(int n);
			float* get_vet(){return vet;};
			float get_max(){return max;};
			float get_min(){return min;};
			int get_dim(){return dim;};	
			void calc_extremos();
			void set_vet(float*,int);
	};
	vetor vetor::vetor(){
		vet=NULL;
	}
	vetor vetor::vetor(int n){
		vet=new float[n];
	}		
	void vetor::set_vet(float *v,int n){
		vet=&v[0];
		dim=n;
		return;
	}
	void vetor::calc_extremos(){
		int i;
		max=vet[0];
		min=vet[0];
		for (i=0;i<dim;i++){
			if (max<vet[i]){
				max=vet[i];
			}
			if (min>vet[i]){
				min=vet[i];
			}
		}
		return;
	}
	
	int main(){
		int i,n;
		float *vet;
		vetor v1;
		
		cout<<"Digite o tamanho de seu vetor"<<endl;
		cin>>n;
		vet = new float [n];
		cout<<"Digite os valores de seu vetor\n";
		for(i=0;i<n;i++){
			cout<<"Valor "<<i+1<<endl;
			cin>>vet[i];
			//scanf("%f",&(vet[i]));
		}
		v1.set_vet(vet,n);
		v1.calc_extremos();
	
		cout<<endl<<"Maior valor: "<<v1.get_max()<<endl<<"O menor valor: "<<v1.get_min()<<endl;
		return 0;
	}
