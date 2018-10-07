	#include <clocale>
	#include<cstdlib>
	#include<iostream>
	using namespace std;
	
	struct cliente{
		int ano;				//ano de nascimento
		long long int cpf;		
		double renda;
		char nome[50];
	};
	
	void leitura_dados(int n,cliente *pntc){
		int i,ctl(0);
		for (i=0;i<n;i++){
			cout<<endl<<"Digite os dados do cliente "<<i+1<<":"<<endl;
			cout<<"CPF: ";
			cin>>pntc[i].cpf;
			cin.ignore(10,'\n');		//limpa buffer
			cout<<"Nome: ";
			cin.getline(pntc[i].nome,50);			//incluindo os espaços, pára em '\n'
			cout<<"Ano de nascimento: ";
			cin>>pntc[i].ano;
			cin.ignore(10,'\n');		
			cout<<"Renda mensal: ";
			cin>>pntc[i].renda;
			cin.ignore(10,'\n');		
			cout<<endl;
		}	
		return;
	}
	void impressao (int n,cliente *pntc){
		int i;
		for (i=0;i<n;i++){
			cout<<"\n\nDados do cliente "<<i+1<<":"<<endl;
			cout<<"CPF: "<<pntc[i].cpf<<endl;
			cout<< "Nome: "<<pntc[i].nome<<endl;
			cout<<"Ano de nascimento: "<<pntc[i].ano<<endl;
			cout<<"Renda mensal: R$ "<<pntc[i].renda<<endl;	
		}			
		return;
	}
	int main(){
		cliente *pntc;
		int n;
		setlocale(LC_ALL,"Portuguese");
		cout<<"Digite o número de clientes:"<<endl;
		cin>>n;
		cin.ignore(10,'\n');
		pntc = new cliente [n];
		leitura_dados(n,pntc);
		impressao(n,pntc);		//impressão dos dados de cada cliente
		delete [] pntc;
		system("PAUSE");
		return 0;
	}
