#include <iostream>
#include <cstdlib>
using namespace std;

//A pilha � uma estrutura de dados semelhante a uma pilha de objetos, em que o �ltimo a ser
//inclu�do � o primeiro a ser retirado ou o primeiro item empilhado � o �ltimo a ser retirado

class  CPilha{
	// Private section
	int *pilha,dim;
	void rodapilha();
	public:
		// Public Declarations
		CPilha(){};
		~CPilha(){};
		void criapilha(int);
		void push();			//retira elementos da pilha
		void pop();				//Adiciona elementos na pilha
		int cheia();			//0 � falso
		int vazia();
	
	protected:
		// Protected Declarations
};
	void CPilha::criapilha(int a){
		pilha=(int*)calloc(a,sizeof(int));
		dim=a;
		return;
	}
	void CPilha::push(int n){
		if(pilha){
			cout<<"Erro de aloca��o da classe:"
			exit(1);
		}
		
		
		return;
	}
	void CPilha::pop(){
		if(pilha){
			cout<<"Erro de aloca��o da classe:"
			exit(1);
		}
		for(int i=0;i<n;i++){
			
			
			
			
			
		}
		
		
		
		return;
	}


	int CPilha::cheia(){
		
		
		
		
		return cheia;
	}
	int CPilha::vazia(){
		
		
		return vazia;
	}




int main(){
	
	
	
	
	
	return 0;
}
