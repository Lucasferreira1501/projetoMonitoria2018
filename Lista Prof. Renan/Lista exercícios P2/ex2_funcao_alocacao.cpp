	#include<clocale>		//setlocale
	#include<cstdlib>			//system
	#include <iostream>
	using namespace std;
	
	float* aloc(int n){
		float *pnt;
		pnt = new float [n];
		return pnt;	
	}
	int main(){
		int n;
		float *pnt1,*pnt2;
		setlocale(LC_ALL,"Portuguese");
			
		cout<<"Digite o tamanho do 1 vetor:"<<endl;
		cin>>n;
		cin.ignore(20,'\n');
		pnt1 = aloc(n);
		cout<<"Digite o tamanho do 2 vetor:"<<endl;
		cin>>n;
		cin.ignore(20,'\n');
		pnt2 = aloc(n);
		cout<<"Endereço do ponteiro do 1º vetor: "<<pnt1<<endl<<"Endereço do ponteiro do 2º vetor: "<<pnt2<<endl;	//endereço do primeiro float apontado 
		delete [] pnt1;
		delete [] pnt2;
		system("PAUSE");
		return 0;
	}
