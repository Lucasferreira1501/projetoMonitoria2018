	#include <stdlib.h>
	#include <stdio.h>
	#include <iostream>
	using namespace std;
		
	class vetor{
		private:
			int n;
			float *vet,*vet_invert;
		public:
			void set_vet(float *,int);
			void inverter();
			float* get_vet();
			float* get_vet_invert();
	};
	float* vetor:: get_vet(){return vet;}
	float* vetor::get_vet_invert(){return vet_invert;}
	void vetor::set_vet(float *num,int k){
		n=k;
		vet_invert = new float[n];
		vet=num;
		return;
	}
	void vetor::inverter(){
		int i;
		for (i=0;i<n;i++){
			vet_invert[i]=vet[n-i-1];
		}
		return;
	}
	
	int main(){
		int i,n;
		float *num;
		vetor vet;
		cout<<"Digite o tamanho de seu vetor:\n";
		cin>>n;
		num = new float[n]; 
		cout<<"Digite os valores de seu vetor:\n";
		for (i=0;i<n;i++){
			cout<<"Valor "<<i+1<<"\n";
			scanf("%f",&num[i]);
			//cin>>vet[i]				??????
		}
		vet.set_vet(num,n);
		vet.inverter();
		num = vet.get_vet_invert();				
		cout<<"Impressao de valores seu vetor invertido:\n";
		printf("( ");
		for (i=0;i<n;i++){
			cout<<num[i];
			if(i==(n-1)){		//evita virgula no final
				break;
			}
			printf(", ");
		}
		printf(")");
	
		return 0;
	}
	

