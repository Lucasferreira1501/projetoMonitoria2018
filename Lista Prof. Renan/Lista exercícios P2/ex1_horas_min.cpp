#include <clocale>		//setlocale
#include<iostream>
#include<cstdlib>		//system
using namespace std;

void HM(int mnts, int *h, int *m){
	*h=mnts/60;						//caso 60 não seja divisor do número de horas, o resultado é truncado para int
	*m = mnts - (*h)*(60);
	//outra maneira de fazer o cálculo é pelo resto da divisao => operador %
	return;
}

int main(){
	int m(0),h(0),mnts;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite o número total de minutos:"<<endl;
	cin>>mnts;
	HM(mnts,&h,&m);
	cout<<"O número total de minutos: "<<mnts<<endl;
	cout<<"Em horas e minutos: "<<h<<" horas e "<<m<<" minutos"<<endl;	
	system("PAUSE");
	return 0;
}


